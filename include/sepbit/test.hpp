/**
 * Testhpp - Header-Only Unit-Test for CPP
 * Copyright 2019 Sepbit
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef INCLUDE_SEPBIT_TEST_HPP_
#define INCLUDE_SEPBIT_TEST_HPP_

#include <stdlib.h>
#include <string.h>
#include <iostream>

#define SEPBIT_TESTHPP(x) \
    std::cout << "\033[0;33m"; \
    std::cout << "###### TESTING ###############" \
    "##########################################"; \
    std::cout << "\033[0m" << std::endl; \
    std::cout << "TEST : " << __func__ << ";" << std::endl; \
    std::cout << "FILE : " << __FILE__ << ";" << std::endl; \
    std::cout << "LINE : " << __LINE__ << "." << std::endl; \
    if (x) { \
        std::cout << "\033[0;32m"; \
        std::cout << "###### PASSED ################" \
        "##########################################"; \
        std::cout << "\033[0m" << std::endl; \
    } else { \
        std::cout << "\033[0;31m"; \
        std::cout << "###### FAILED ################" \
        "##########################################"; \
        std::cout << "\033[0m" << std::endl; \
        exit(EXIT_FAILURE); \
    }

#endif  // INCLUDE_SEPBIT_TEST_HPP_
