#include <iostream>

void duplicate (int& a, int& b, int& c)
{
	a *= 2;
	b *= 2;
	c *= 2;
}

int main()
{
	int x=1, y=3, z=7;
	duplicate(x, y, z);
	std::cout<<x<<"\t"<<y<<"\t"<<z<<std::endl;
}
