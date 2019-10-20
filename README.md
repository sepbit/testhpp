# Testhpp

> Header-Only Unit-Test for CPP

This is a simple library Header-Only Unit-Test for CPP.

This package is compatible with [cpplint](https://github.com/cpplint/cpplint).

![Screenshot](https://gitlab.com/sepbit/testhpp/uploads/7ff423534aef2c48eee6652bed7da9eb/testhpp.png)

## Install

Via CMake and Git.

``` bash
git submodule add https://gitlab.com/sepbit/testhpp.git vendor/
```

Add the snippet below to your `CMakeLists.txt` file

``` cmake
include_directories(vendor/testhpp/include)
```

## Usage

``` c++
#include "sepbit/test.hpp"

void equalTest() {
    SEPBIT_TESTHPP(1 == 1);
}

int main(int argc, char *argv[]) {
    equalTest();
    return 0;
}
```

## Testing

Via CMake and CTest

``` bash
$ mkdir build
$ cd build
$ cmake -D TEST=ON -G "Unix Makefiles" ..
$ make
$ ctest -V
```

## Contributing

Pull Requests not accepted.

## Security

If you discover any security related issues, please email `contato@sepbit.com` instead of using the issue tracker.

## License

Apache 2.0, please see [LICENSE](LICENSE) and [NOTICE](NOTICE) files for more information.
