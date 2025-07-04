# copyright ############################### #
# This file is part of the Xboinc Package.  #
# Copyright (c) CERN, 2024.                 #
# ######################################### #

import json
import os
from pathlib import Path
from xaux import FsPath, AfsPath, EosPath, LocalPath, eos_accessible, afs_accessible

from .general import _pkg_root
from .user import update_user_data, get_user_data, remove_user
from .server import server_account, dropdir


user_data_file = _pkg_root / "user_data.json"


def _create_json(user, directory, remove=False):
    register = "deregister" if remove else "register"
    user_file = Path.cwd() / f"{register}_{user}.json"
    if remove:
        data = {"user": user}
    else:
        directory = FsPath(directory)
        if isinstance(directory, EosPath):
            domain = "eos"
        elif isinstance(directory, AfsPath):
            domain = "afs"
        else:
            raise ValueError(
                f"Directory {directory} not on EOS nor AFS! "
                + "The xboinc server will not be able to reach it."
            )
        data = {"user": user, "directory": f"{directory}", "domain": domain}
    with user_file.open("w") as f:
        json.dump(data, f)
    return user_file, data


def _give_rights(directory, acl="rlwikd"):
    if isinstance(directory, EosPath):
        raise NotImplementedError("Ask CERN IT for explanation...")
    if isinstance(directory, LocalPath):
        raise NotImplementedError(
            "Local directories are not supported for BOINC server registration."
        )
    if isinstance(directory, AfsPath):
        if not directory.is_dir():
            raise ValueError(
                f"Directory {directory} not found or not a directory (or no permissions)!"
            )
        directory.acl = acl
    else:
        raise ValueError(
            f"Directory {directory} not on EOS nor AFS! "
            + "The xboinc server will not be able to reach it."
        )


def _remove_rights(directory):
    if isinstance(directory, EosPath):
        raise NotImplementedError("Ask CERN IT for explanation...")
    if isinstance(directory, LocalPath):
        raise NotImplementedError(
            "Local directories are not supported for BOINC server registration."
        )
    if isinstance(directory, AfsPath):
        if not directory.is_dir():
            raise ValueError(
                f"Directory {directory} not found or not a directory (or no permissions)!"
            )
        del directory.acl
    else:
        raise ValueError(
            f"Directory {directory} not on EOS nor AFS! "
            + "The xboinc server will not be able to reach it."
        )


def register(user, directory):
    """
    Register a user to the BOINC server and dev server, by declaring
    the username and user boinc directory, and giving access rights
    to the BOINC admin process. This is not instantaneous, as the
    BOINC server periodically parses new users.

    Parameters
    ----------
    user : string
        Name of the user to register.
    directory : pathlib.Path
        Dedicated folder that the BOINC server can reach (i.e. on CERN
        AFS or EOS), which will hold the new submissions and results.
        Should not be accessed manually by the user to avoid syncing
        issues.

    Returns
    -------
    None.
    """

    assert eos_accessible
    directory = FsPath(directory)
    if not directory.is_dir():
        raise ValueError(
            f"Directory {directory} not found or not a directory (or no permissions)!"
        )
    user_file, data = _create_json(user, directory)
    # This is a small hack to avoid losing sixtadm ACLs during testing
    acl = "rlwikda" if user == server_account else "rlwikd"
    try:
        _give_rights(directory, acl=acl)
    except Exception as e:
        user_file.unlink()
        raise e
    input_dir = directory / "input"
    input_dev_dir = directory / "input_dev"
    output_dir = directory / "output"
    output_dev_dir = directory / "output_dev"
    input_dir.mkdir(parents=True, exist_ok=True)
    input_dev_dir.mkdir(parents=True, exist_ok=True)
    output_dir.mkdir(parents=True, exist_ok=True)
    output_dev_dir.mkdir(parents=True, exist_ok=True)
    try:
        _give_rights(input_dir, acl=acl)
        _give_rights(input_dev_dir, acl=acl)
        _give_rights(output_dir, acl=acl)
        _give_rights(output_dev_dir, acl=acl)
    except Exception as e:
        user_file.unlink()
        raise e
    if FsPath(dropdir / f"de{user_file.name}").exists():
        FsPath(dropdir / f"de{user_file.name}").rmdir()
        print("Removed existing deregistration file on server dropdir.")
    if FsPath(dropdir / f"dev_de{user_file.name}").exists():
        FsPath(dropdir / f"dev_de{user_file.name}").rmdir()
    if FsPath(dropdir / user_file.name).exists():
        FsPath(dropdir / user_file.name).rmdir()
        print("Replaced existing registration file on server dropdir.")
    if FsPath(dropdir / f"dev_{user_file.name}").exists():
        FsPath(dropdir / f"dev_{user_file.name}").rmdir()
    try:
        FsPath(user_file).copy_to(dropdir)
        FsPath(
            dropdir / user_file.name,
        ).move_to(dropdir / f"dev_{user_file.name}")
        FsPath(user_file).copy_to(dropdir)
    except Exception as exc:
        user_file.unlink()
        raise RuntimeError(
            "Failed to copy register file to server dropdir.\n"
            "Do you have permissions?\n"
            "If not, add yourself to the CERN xboinc-submitters egroup."
        ) from exc
    user_file.unlink()
    update_user_data(user, data)


def deregister(user):
    """
    Remove a user from the BOINC server and dev server.  This is
    not instantaneous, as the BOINC server periodically parses
    the users to remove.

    Parameters
    ----------
    user : string
        Name of the user to deregister.

    Returns
    -------
    None.
    """

    assert eos_accessible
    user_file, _ = _create_json(user, "", remove=True)
    try:
        data = get_user_data(user)
    except ValueError:
        print(f"User {user} not found in user_data.")
    else:
        directory = FsPath(data["directory"])
        # This is a quick check to avoid losing sixtadm ACLs during testing
        if user != server_account:
            try:
                input_dir = directory / "input"
                input_dev_dir = directory / "input_dev"
                output_dir = directory / "output"
                output_dev_dir = directory / "output_dev"
                _remove_rights(input_dir)
                _remove_rights(input_dev_dir)
                _remove_rights(output_dir)
                _remove_rights(output_dev_dir)
                _remove_rights(directory)
            except (RuntimeError, ValueError, OSError) as e:
                print(
                    f"Warning: could not remove ACL on {data['directory']} for server "
                    + f"account {server_account}!\nPlease do this manually."
                )
                # show the error message
                print(f"Error: {e}")
    if FsPath(dropdir / user_file.name[2:]).exists():
        FsPath(dropdir / user_file.name[2:]).rmdir()
        print("Removed existing registration file on server dropdir.")
    if FsPath(dropdir / f"dev_{user_file.name[2:]}").exists():
        FsPath(dropdir / f"dev_{user_file.name[2:]}").rmdir()
    try:
        FsPath(user_file).copy_to(dropdir)
        FsPath(
            dropdir / user_file.name,
        ).move_to(dropdir / f"dev_{user_file.name}")
        FsPath(user_file).copy_to(dropdir)
    except Exception as exc:
        user_file.unlink()
        raise RuntimeError(
            "Failed to copy deregister file to server dropdir.\n"
            "Please inform an xboinc admin to deregister manually."
        ) from exc
    user_file.unlink()
    remove_user(user)
