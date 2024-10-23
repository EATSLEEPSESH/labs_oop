#include <iostream>
#include <string>
#include <bitset>

std::string int_to_binary_string(int n) {
    std::bitset<32> binary(n);
    return (n >= 0 ? binary.to_string() : "Введено отрицательное число");
}