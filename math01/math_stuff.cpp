#include <iostream>
#include "math_utils.h"

int main()
{
	std::cout<<"Your Answer is: "<<std::endl;
	std::cout<<utilz::pow(3,3)<<std::endl;
	std::cout<<utilz::pow(3)<<std::endl;
	Rectangle rect;
	rect.length = 10;
	rect.width=12;
	std::cout<<utilz::area(rect)<<std::endl;
	return 0;
}
