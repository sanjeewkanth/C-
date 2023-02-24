#include "func.h"

int main()
{
	std::thread first(foo);
	std::thread second (bar,0);
	
	std::cout << "functions are executing concurrently\n";
	
	first.join();
	second.join();
	
	std::cout << "completed\n";
}
