# Testhpp

> Header-Only Unit-Test for CPP

This is a simple library Header-Only Unit-Test for CPP.

This package is compatible with [cpplint](https://github.com/cpplint/cpplint).

## Install

Via CMake.

``` bash
include_directories(testhpp/include)
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
