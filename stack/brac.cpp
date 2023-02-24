#include "func.h"

int main()
{
	std::string str = "[{()}]";
	if (check_brac(str))
	{
		std::cout << "Balanced";
	}
	else
	{
		std::cout << "Not Balanced";
	}
	std::cout << std::endl;
}


