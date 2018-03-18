//Math operations are defined here
#include <iostream>
#include "Utils.h"

#define PI (3.141592)
#define SQUARE(number) ((number)*(number))
#define SUM(x, y) ((x)+(y))
#define MAX(x, y, max) (((x) > (y)) ? (max) = (x) : (max) = (y));

double Square(double x, bool track)
{
	if (track)
		TRACE();
	return SQUARE(x);
}

int Sum(int x, int y, bool track)
{
	if (track)
		TRACE();
	return SUM(x, y);
}

double CircleArea(double r, bool track)
{
	if (track)
		TRACE();
	return PI * SQUARE(r);
}

int Max(int x, int y, bool track)
{
	if (track)
		TRACE();
	int max = 0;
	MAX(x, y, max);
	return max;
}