#ifndef MATH_UTILS
#define MATH_UTILS

struct Rectangle
{
	double length;
	double width;
};

namespace utilz
{
	double pow(double base, int power = 2);
	double area(Rectangle rectangle);
	double area(double length);
	double area(double length, double width);
}
#endif
