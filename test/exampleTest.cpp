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
 *
 * C++ version 11
 *
 * @author    Vitor Guia <contato@vitor.guia.nom.br>
 * @copyright 2019 Sepbit
 * @license   http://www.apache.org/licenses/LICENSE-2.0
 * @see       https://gitlab.com/sepbit/testhpp Repository of Testhpp
 */

#include <string>
#include "sepbit/test.hpp"

/**
 * Check if is equal to
 *
 * @return void
 */
void equalTest() {
    SEPBIT_TESTHPP(1 == 1);
}

/**
 * Check if is not equal to
 *
 * @return void
 */
void notEqualTest() {
    SEPBIT_TESTHPP(1 != 2);
}

/**
 * Check if is less than
 *
 * @return void
 */
void lessTest() {
    SEPBIT_TESTHPP(1 < 2);
}

/**
 * Check if is greater than
 *
 * @return void
 */
void greaterTest() {
    SEPBIT_TESTHPP(2 > 1);
}

/**
 * Check if string is equal to
 *
 * @return void
 */
void stringCompareTest() {
    std::string str1("Sepbit");
    std::string str2("Sepbit");
    SEPBIT_TESTHPP(str1.compare(str2) == 0);
}

/**
 * Secify tests to run
 *
 * @return int 0 to passed and 1 to failed
 */
int main(int argc, char *argv[]) {
    equalTest();
    notEqualTest();
    lessTest();
    greaterTest();
    stringCompareTest();
    return 0;
}
