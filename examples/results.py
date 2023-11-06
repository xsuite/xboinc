import xboinc as xb

list_of_succeeded_jobs = []
user='ddicroce'
studyname='example_study'
with xb.RetrieveJobs(user=user, study=studyname) as all_jobs:
    for jobname, new_particles in all_jobs:
        print(jobname)
        print(f"Particles: {new_particles.at_turn}")
