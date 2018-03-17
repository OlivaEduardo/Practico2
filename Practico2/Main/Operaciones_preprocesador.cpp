// Variable concatenation operation is defined here
#include <iostream>
#include "Utils.h"

#define VARNAMES(NAME1, NAME2)  ( #NAME1 ## #NAME2 )

void Concatenation(char var1, char var2, bool track)
{
	if (track)
		TRACE();
	char names[] = VARNAMES(var1, var2);
	std::cout << "El nombre de las variables concatenadas es: " << names << "\n";
}

void Print(char str[], bool track)
{
	if (track)
		TRACE();
	std::cout << "Valor ingresado: " << str << "\n";
}