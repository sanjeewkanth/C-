#include <iostream>
#include "math_utils.h"
namespace utilz
{
	double pow(double base, int power)
	{
		double total =1;
		for(int i = 0; i < power; i++)
		{
			total *= base;
		}
		return total;
	}

	double area(Rectangle rectangle)
	{
		return rectangle.length*rectangle.width;
	}

	double area(double length)
	{
		return length*length;
	}

	double area(double length, double width)
	{
		return length, width;
	}
}
