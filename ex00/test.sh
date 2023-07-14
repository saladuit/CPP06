#!/bin/bash
make 

char_cases=("c" "a")
int_cases=("0" "-42" "42")
float_cases=("0.0f" "-4.2f" "4.2f" "-inff" "+inff" "nanf")
double_cases=("0.0" "-4.2" "4.2" "-inf" "+inf" "nan")

test_num=1

for case in "${char_cases[@]}"; do
    echo "Test char $test_num: ./scalar_converter $case"
    ./ScalarConverter.out $case
    echo
    ((test_num++))
done

for case in "${int_cases[@]}"; do
    echo "Test int $test_num: ./scalar_converter $case"
    ./ScalarConverter.out $case
    echo
    ((test_num++))
done

for case in "${float_cases[@]}"; do
    echo "Test float $test_num: ./scalar_converter $case"
    ./ScalarConverter.out $case
    echo
    ((test_num++))
done

for case in "${double_cases[@]}"; do
    echo "Test double $test_num: ./scalar_converter $case"
    ./ScalarConverter.out $case
    echo
    ((test_num++))
done
