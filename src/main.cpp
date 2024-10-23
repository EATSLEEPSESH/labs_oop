#include <iostream>
#include <string>
#include "solution.cpp"


int main() {
    int n;
    std::cin >> n;
    std::string binary_string = int_to_binary_string(n);
    std::cout <<"Число " << n << " в двоичном виде: " << binary_string << std::endl;
    return 0;
}
