#!/usr/bin/env sh
#
# pip install cpplint
#

#
# Check cpplint
#
if [ ! "$(command -v cpplint)" ]; then
    echo "Command cpplint not found"
    exit
fi

cpplint include/sepbit/*.hpp test/*.cpp