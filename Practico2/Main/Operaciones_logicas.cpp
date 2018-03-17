//Variable swapping operations are defined here
#include <iostream>
#include "Utils.h"

#define SWAP(x, y, aux) (aux) = (x); (x) = (y); (y) = (aux);

void Swap(int* ptrx, int* ptry, bool track)
{
	if (track)
		TRACE();
	int aux = 0;
	SWAP(*ptrx, *ptry, aux);
}

void Swap(double* ptrx, double* ptry, bool track)
{
	if (track)
		TRACE();
	double aux = 0.0;
	SWAP(*ptrx, *ptry, aux);
}

void Swap(char str1[], const int str1length, char str2[], const int str2length, bool track)
{
	if (track)
		TRACE();
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
		ERROR(3, "Error al procesar la operacion");
}
