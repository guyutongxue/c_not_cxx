#!/bin/bash

CC=${CC:-gcc}
fail=0

# Compile C files
for file in src/*; do
    if [[ -d $file ]]; then
        file="$file/*.c"
    fi
    echo -n "Compiling $file in C... "
    $CC -xc -std=c2x -pedantic-errors -o /tmp/a.out "$file" 2> /dev/null
    if [[ $? -eq 0 ]]; then
        echo -e "\033[32mOK\033[0m"
    else
        echo -e "\033[31mFAIL\033[0m (should be OK)"
        fail=$(($fail + 1))
    fi
    echo -n "Compiling $file in C++... "
    $CC -xc++ -std=c++2b -pedantic-errors -o /tmp/a.out "$file" 2> /dev/null
    if [[ $? -eq 0 ]]; then
        echo -e "\033[31mOK\033[0m (should be FAIL)"
        fail=$(($fail + 1))
    else
        echo -e "\033[32mFAIL\033[0m"
    fi
done

exit $fail
