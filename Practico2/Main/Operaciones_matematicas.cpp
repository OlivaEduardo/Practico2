//Math operations are defined here

#define PI (3.141592)
#define SQUARE(number) ((number)*(number))
#define SUM(x, y) ((x)+(y))
#define MAX(x, y, max) (((x) > (y)) ? (max) = (x) : (max) = (y));

double Square(double x)
{
	return SQUARE(x);
}

int Sum(int x, int y)
{
	return SUM(x, y);
}

double CircleArea(double r)
{
	return PI * SQUARE(r);
}

int Max(int x, int y)
{
	int max = 0;
	MAX(x, y, max);
	return max;
}