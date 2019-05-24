#!/usr/bin/env sh

#
# Check cpplint
#
if [ ! "$(command -v cpplint)" ]; then
    echo "Command cpplint not found"
    exit
fi

cpplint include/sepbit/* test/*