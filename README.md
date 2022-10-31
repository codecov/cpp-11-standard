# C++ 11 Standard

[![Workflow for C++ Standard Action](https://github.com/codecov/cpp-11-Standard/actions/workflows/cpp-11-standard.yml/badge.svg)](https://github.com/codecov/cpp-11-Standard/actions/workflows/cpp-11-standard.yml)  [![codecov](https://codecov.io/gh/codecov/cpp-11-Standard/branch/master/graph/badge.svg)](https://codecov.io/gh/codecov/cpp-11-Standard)
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Fcodecov%2Fcpp-11-standard.svg?type=shield)](https://app.fossa.com/projects/git%2Bgithub.com%2Fcodecov%2Fcpp-11-standard?ref=badge_shield)

### Last Updated: 10/31/22 00:19:32

## What is this?

This is a **C++** application, with basic unit tests, for which coverage is uploaded to Codecov on a daily basis. It can also serve as an example for how to integrate Codecov into your C++ project. If the build is passing for this project, then Codecov's C++ report processing is functional and correct on codecov.io.

## Configuration

This project is written in `C++ 11` and it is built using `Clang++`. Unit test are written using the `Catch2` framework and coverage reports are generated using the `gcov` CLI.

## Usage

### The Docker Way

Run unit tests inside a Docker container
```bash
docker-compose up
```

### The Local Way

Compile Test Binary
```
g++ -std=c++11 -o TestBinary -fprofile-arcs -ftest-coverage test/test_index.cpp
```

Run Test Binary
```
./TestBinary
```

Generate Report
```
gcov -o . test/test_index.cpp
```

## Reporting Issues

If you've discovered an issue with this repository or with C++ processing in general, it is recommended to email support@codecov.io rather than post an issue here. This repository will not be checked regularly for open issues.

## Contributing

Contributions are welcome! If you'd like to contribute to this repository, feel free to open a pull request or flag an issue. If you would like to contribute a new lanaguage standard, [you can get more information here](https://github.com/codecov/standards-scripts/blob/master/README.md#contributing). 


## License
[![FOSSA Status](https://app.fossa.com/api/projects/git%2Bgithub.com%2Fcodecov%2Fcpp-11-standard.svg?type=large)](https://app.fossa.com/projects/git%2Bgithub.com%2Fcodecov%2Fcpp-11-standard?ref=badge_large)