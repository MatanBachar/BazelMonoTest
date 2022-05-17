# BazelMonoTest


This repo contains 3 subrepositories:
1. TheShower
2. TimeShow
3. HelloShow

TheShower depeneds on both TimeShow and HelloShow for its build. The dependency is repositories-based (look at the WORKSPACE file)

## How to run
To run the primary project: `bazel run TheShower:TheShower`


## How to test
To test the HelloShow package: `bazel test HelloShow/UnitTests:HelloShowUt`

**NOTE:** in order to see the gtest log, run `bazel test --test_output=all HelloShow/UnitTests:HelloShowUt`