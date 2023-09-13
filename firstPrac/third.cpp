#include <iostream>
#include <bitset>

int main()
{
	int number;
	std::cout << "Enter number: ";
	std::cin >> number;

	std::cout << std::bitset<32>(number) << "\n";
	number = number << 3;
	std::cout << std::bitset<32>(number) << "\n";
	std::cout << "Result: " << number;
}
