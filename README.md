# BazelMonoTest


This repo contains 3 subrepositories:
1. TheShower
2. TimeShow
3. HelloShow

TheShower depeneds on both TimeShow and HelloShow for its build. The dependency is repositories-based (look at the WORKSPACE file)

## How to run
To run the primary repo: `bazel run //TheShower:TheShower`