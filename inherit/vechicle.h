#ifndef VECHICLE_H
#define VECHICLE_H

#include <iostream>
#include <string>
class Vehicle
{
	int price;
	public:
		std::string brand = "ford";
		int max_speed;
		void honk();
		int get_price();
		void set_price(int new_price);

};

class Car : public Vehicle
{
	public:
		std::string model = "Mustang";
};

std::ostream& operator << (std::ostream& output, const Car car);

#endif
