#include "stur_f.h"

std::ostream& operator <<(std::ostream& output, const Person *person)
{
	output << person->name << "\n"<< person->age << "\n" << person->num;
	return output;
}
