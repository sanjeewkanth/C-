#include "vechicle.h"

int Vehicle::get_price()
	{
		return Vehicle::price;
	}
void Vehicle::set_price(int new_price)
	{
		Vehicle::price = new_price;
	}
void Vehicle::honk()
	{
		std::cout << "Hook!" << std::endl;
	}
std::ostream& operator << (std::ostream& output, Car car)
{
	output << car.brand << "\t" << car.max_speed << "\t" << car.get_price() << "\t" << car.model;
	return output;
}
