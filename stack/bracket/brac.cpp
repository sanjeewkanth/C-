#include "func.h"

int main()
{
	std::string str = "a[r{e(ang)t}t]c";
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


