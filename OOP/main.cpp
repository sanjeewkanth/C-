#include "teacher.h"
int main()
{
	User user;
	User me("man","mai","Silver"); 
	User you("lai","ly","Gold");
	std::cin >> user;
	std::cout <<user;
	
	Teacher teacher;
	teacher.first_name = "Hello";
	std::cout<<teacher.first_name<<std::endl;
	teacher.output();
	
	User& u = teacher;
	u.output();
	

}
