
#define PI (3.141592)

double Cuadrado(double x)
{
	return x * x;
}

int Suma(int x, int y)
{
	return x + y;
}

double AreaCirc(double r)
{
	return PI * Cuadrado(r);
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