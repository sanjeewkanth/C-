#include "stur_f.h"
int main()
{
	Person *ptr, person;
	ptr = &person;
	std::cout << "Enter your name: ";
	getline(std::cin, ptr->name);
	std::cout << "Enter your age: ";
	std::cin >> ptr->age;
	std::cout << "Enter your number: ";
	std::cin >> ptr->num;
	
	std::cout << ptr << std::endl;
}
