//Aqui se definiran las operaciones de intercambio de variables
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

void Swap(char cadena1[], const int longCadena1, char cadena2[], const int longCadena2)
{
	if (longCadena1 == longCadena2)
	{
		char aux = 0;
		for (int i = 0; i < longCadena1; i++)
		{
			aux = cadena1[i];
			cadena1[i] = cadena2[i];
			cadena2[i] = aux;
		}
	}
	else
		std::cout << "Error al procesar la operacion \n";
}

