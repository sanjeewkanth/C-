#include <iostream>
#include <string>

int main()
{
	std::string str = "Hello";
	for (auto c : str)
	{
		std::cout << c << "\t";
	}
	std::cout << std::endl;
}
