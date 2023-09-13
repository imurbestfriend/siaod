#include <iostream>
#include <bitset>

int main()
{
    short int number = 0xFF12; // 1111_1111_0001_0010
    short int mask = 0xC07F; // 1100_0011_1111_1111

    std::cout << "Number: \t" << std::bitset<16>(number) << "\n";
    std::cout << "Mask:   \t" << std::bitset<16>(mask) << "\n";

    number = number & mask;
    std::cout << "Result: \t" << std::hex << number << "\n";
    std::cout << "Result: \t" << std::bitset<16>(number) << std::endl;
}
