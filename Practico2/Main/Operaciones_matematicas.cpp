//Math operations are defined here

#define PI (3.141592)

double Square(double x)
{
	return x * x;
}

int Sum(int x, int y)
{
	return x + y;
}

double CircleArea(double r)
{
	return PI * Square(r);
}

int Max(int x, int y)
{
	int max;
	if (x > y)
	{
		max = x;
	}
	else
	{
		max =  y;
	}

	return max;
}