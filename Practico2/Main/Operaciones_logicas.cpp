//Variable swapping operations are defined here
#include <iostream>

void Swap(int* ptrx, int* ptry)
{
	int aux = *ptrx;
	*ptrx = *ptry;
	*ptry = aux;
}

void Swap(double* ptrx, double* ptry)
{
	double aux = *ptrx;
	*ptrx = *ptry;
	*ptry = aux;
}

void Swap(char str1[], const int str1length, char str2[], const int str2length)
{
	if (str1length == str2length)
	{
		char aux = 0;
		for (int i = 0; i < str1length; i++)
		{
			aux = str1[i];
			str1[i] = str2[i];
			str2[i] = aux;
		}
	}
	else
		std::cout << "Error al procesar la operacion \n";
}

