#include <iostream>
#include <bitset>

int main()
{
	
	int number;
	int n;
	std::cout << "Enter number: ";
	std::cin >> number;

	std::cout << "Enter position: ";
	std::cin >> n;

	std::cout << "Number: \t" << std::bitset<32>(number) << "\n";

	int mask = ~(1 << n);
	
	std::cout << "Mask:   \t" << std::bitset<32>(mask) << "\n";

	number = number & mask;
	std::cout << "Number (res):\t" << std::bitset<32>(number) << "\n";
	std::cout << "Result: " << number;
}
