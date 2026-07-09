#include <iostream>
#include "hello.hpp"

void printHello() {
    std::cout << "Hello from UserApp!" << std::endl;
}

int main() {
    std::cout << "System Initialized Successfully via Fenix Toolchain." << std::endl;
    printHello();
    int debug_var = 42;
    std::cout << "Value of memory allocation: " << debug_var << std::endl;
    return 0;
}
