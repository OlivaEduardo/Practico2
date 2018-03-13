// Aqui se realizara la definicion de concatenacion de nombres de variables e impresion de literal.
#include <iostream>

#define VARNAMES(NAME1, NAME2)  ( #NAME1 ## #NAME2 )

void Concatenacion(char var1, char var2)
{
	char nombres[] = VARNAMES(var1, var2);
	std::cout << "El nombre de las variables concatenadas es: " << nombres << "\n";
}

void Imprimir(char cadena[])
{
	std::cout << "Valor ingresado: " << cadena << "\n";
}