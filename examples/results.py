import xboinc as xb

list_of_succeeded_jobs = []
user='ddicroce'
studyname='example_study'
for jobname, new_particles in xb.RetrieveJobs(user=user, study=studyname):
    print(jobname)
    print(f"Particles: {new_particles.at_turn}")
