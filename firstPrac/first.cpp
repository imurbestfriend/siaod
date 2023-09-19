#include <iostream>
#include <bitset>

int main()
{
    int number = 0x412; // 1042 = ..._0100_0001_0010
    int mask = 0x61000000; // ..._0000_1010_0000

    std::cout << "Number: \t" << std::bitset<32>(number) << "\n";
    std::cout << "Mask:   \t" << std::bitset<32>(mask) << "\n";

    number = number | mask;
    std::cout << "Result: \t" << std::hex << number << "\n";
    std::cout << "Result: \t" << std::bitset<32>(number) << std::endl;
}
