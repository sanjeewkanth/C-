#include "vechicle.h"

int get_price()
	{
		return Vechicle::price;
	}
void set_price(int new_price)
	{
		Vechicle::price = new_price;
	}
void honk()
	{
		std::cout << "Hook!" << std::endl;
	}
std::ostream& operator << (std::ostream& output, Car car)
{
	output << car.brand << "\t" << car.max_speed << "\t" << car.get_price() << "\t" << car.model;
	return output;
}
