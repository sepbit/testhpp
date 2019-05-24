#!/usr/bin/env sh

DIR="*/CMakeFiles/"

#
# Check gcov
#
if [ ! "$(command -v gcov)" ]; then
    echo "Command gcov not found"
    exit
fi

#
# Check lcov
#
if [ ! "$(command -v lcov)" ]; then
    echo "Command lcov not found"
    exit
fi

mkdir -p ./coverage

lcov --capture \
    --directory $DIR \
    --output-file coverage/coverage-total.info

lcov --no-external \
    --remove coverage/coverage-total.info \
    "/usr/include/*" \
    --output-file coverage/coverage-filtered.info

genhtml coverage/coverage-filtered.info \
    --output-directory coverage
