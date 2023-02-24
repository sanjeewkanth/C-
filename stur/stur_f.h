#ifndef STUR_F_H
#define STUR_F_H

#include <iostream>
#include <string>
struct Person
{
	std::string name;
	int age;
	float num;
};

std::ostream& operator <<(std::ostream& output, const Person person);


#endif
