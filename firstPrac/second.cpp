#include <iostream>
#include <bitset>

int main()
{
    short int number = 0xFF12;
    short int mask = 0xF8FF;

    std::cout << "Number: \t" << std::bitset<16>(number) << "\n";
    std::cout << "Mask:   \t" << std::bitset<16>(mask) << "\n";

    number = number & mask;
    std::cout << "Result: \t" << std::hex << number << "\n";
    std::cout << "Result: \t" << std::bitset<16>(number) << std::endl;
}
