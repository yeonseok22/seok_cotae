#include <iostream>

int main(void)
{
    int a = 0x80000000;     // 10000000 00000000 00000000 00000000
    int b = 0x7fffffff;     // 01111111 11111111 11111111 11111111
    std::cout << a << "\n";
    std::cout << b << "\n";
}