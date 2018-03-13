// Main.cpp: define el punto de entrada de la aplicación de consola.

#include <iostream>

#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_String.h"


int main()
{
	int opcion = 0;

	do
	{
		std::cout << "Ingrese un numero para seleccionar una opcion: \n"
			<< "1. Cuadrado de un numero. \n"
			<< "2. Suma de dos numeros. \n"
			<< "3. Area de un circulo. \n"
			<< "4. Maximo de dos numeros. \n"
			<< "5. Concatenacion de variables. \n"
			<< "6. Impresion de texto. \n"
			<< "7. Comparacion de cadena. \n"
			<< "8. Operaciones binarias. \n"
			<< "9. Intercambio de variables. \n";
		std::cin >> opcion;
	} while (opcion <= 0 || opcion > 9);

	switch (opcion)
	{
	case 1:
	{
		std::cout << "Ingrese un numero: ";
		int numero = 0;
		std::cin >> numero;
		std::cout << "El cuadrado de " << numero << " es: " << Cuadrado(numero) << ". \n";
		break;
	}

	case 2:
	{
		std::cout << "Ingrese el primer numero: ";
		int numSuma1 = 0;
		int numSuma2 = 0;
		std::cin >> numSuma1;
		std::cout << "Ingrese el segundo numero: ";
		std::cin >> numSuma2;
		std::cout << "La suma de los dos numeros ingresados es: " << Suma(numSuma1, numSuma2) << ". \n";
		break;
	}
		
	case 3:
	{
		std::cout << "Ingrese el radio del circulo: ";
		int radio = 0;
		std::cin >> radio;
		std::cout << "El area del circulo es: " << AreaCirc(radio) << ". \n";
		break;
	}
		
	case 4:
	{
		std::cout << "Ingrese el primer numero: ";
		int numComparacion1 = 0;
		std::cin >> numComparacion1;
		std::cout << "Ingrese el segundo numero: ";
		int numComparacion2 = 0;
		std::cin >> numComparacion2;
		std::cout << "El mayor de los dos numeros es: " << Max(numComparacion1, numComparacion2) << ". \n";
		break;
	}
		
	case 5:
	{
		Concatenacion('A', 'B');
		break;
	}
		
	case 6:
	{
		std::cout << "Ingrese el texto a imprimir, usar punto al final: ";
		char cadena[50];
		std::cin.getline(cadena, 50, '.');
		Imprimir(cadena);
		break;
	}
		
	case 7:
	{
		std::cout << "Ingrese una palabra a comparar: ";
		char palabra1[25];
		std::cin >> palabra1;
		std::cout << "Ingrese segunda palabra a comparar: ";
		char palabra2[25];
		std::cin >> palabra2;
		if (Comparacion(palabra1, palabra2))
		{
			std::cout << "Ambas palabras son iguales. \n";
		}
		else
		{
			std::cout << "Ambas palabras son distintas. \n";
		}
		break;
	}
		
	case 8:
	{
		int opcBin = 0;
		do
		{
			std::cout << "Ingrese un numero para seleccionar una operacion: \n"
				<< "1. AND binario: \n"
				<< "2. OR binario: \n"
				<< "3. Desplazamiento de 2 bits a la derecha: \n"
				<< "4. Desplazamiento de 2 bits a la izquierda: \n";

			std::cin >> opcBin;
		} while (opcBin <= 0 || opcBin > 4);

		switch (opcBin)
		{
		case 1:
		{
			int numAND1 = 0, numAND2 = 0;
			std::cout << "Ingrese primer numero: ";
			std::cin >> numAND1;
			std::cout << "Ingrese segundo numero: ";
			std::cin >> numAND2;
			std::cout << "El resultado es: " << BinAND(numAND1, numAND2) << "\n";
			break;
		}
			
		case 2:
		{
			int numOR1 = 0, numOR2 = 0;
			std::cout << "Ingrese primer numero: ";
			std::cin >> numOR1;
			std::cout << "Ingrese segundo numero: ";
			std::cin >> numOR2;
			std::cout << "El resultado es: " << BinOR(numOR1, numOR2) << ". \n";
			break;
		}
			
		case 3:
		{
			int numDespDer = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> numDespDer;
			std::cout << "El resulado es: " << DesplazamientoDerecha(numDespDer) << ". \n";
			break;
		}
			
		case 4:
		{
			int numDespIzq = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> numDespIzq;
			std::cout << "El resultado es: " << DesplazamientoIzquierda(numDespIzq) << ". \n";
			break;
		}
			
		default:
		{
			std::cout << "La opcion ingresada no es valida. \n";
			break;
		}
		}
		break;
	}

	case 9:
	{
		int opcInter = 0;
		do
		{
			std::cout << "Ingrese un numero para seleccionar el tipo de datos a intercambiar: \n"
				<< "1. Enteros. \n"
				<< "2. Numeros de punto flotante.\n"
				<< "3. Cadenas de caracteres. \n";
			std::cin >> opcInter;
		} while (opcInter <= 0 || opcInter > 3);

		switch (opcInter)
		{
		case 1:
		{
			int valorA = 0, valorB = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> valorA;
			std::cout << "ingrese valor B: ";
			std::cin >> valorB;
			std::cout << "Los valores A y B son " << valorA << " y " << valorB << " respectivamente. \n";

			Swap(&valorA, &valorB);

			std::cout << "Los valores A y B son " << valorA << " y " << valorB << " respectivamente. \n";
			break;
		}
			
		case 2:
		{
			double valorFloatA = 0, valorFloatB = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> valorFloatA;
			std::cout << "ingrese valor B: ";
			std::cin >> valorFloatB;
			std::cout << "Los valores A y B son " << valorFloatA << " y " << valorFloatB << " respectivamente. \n";

			Swap(&valorFloatA, &valorFloatB);

			std::cout << "Los valores A y B son " << valorFloatA << " y " << valorFloatB << " respectivamente. \n";
			break;
		}
			
		case 3:
		{
			char valorCadena1[25], valorCadena2[25];
			std::cout << "Ingrese una palabra como valor A: ";
			std::cin >> valorCadena1;
			std::cout << "Ingrese una palabra como valor B: ";
			std::cin >> valorCadena2;
			std::cout << "Los valores A y B son " << valorCadena1 << " y " << valorCadena2 << " respectivamente. \n";

			Swap(valorCadena1, 25, valorCadena2, 25);

			std::cout << "Los valores A y B son " << valorCadena1 << " y " << valorCadena2 << " respectivamente. \n";
			break;
		}
			
		default:
		{
			std::cout << "La opcion ingresada no es valida. \n";
			break;
		}
		}
		break;
	}
	default:
	{
		std::cout << "La opcion ingresada no es valida. \n";
		break;
	}
	}

	std::cout << "Ingrese un numero para finalizar: ";
	int corte = 0;
	std::cin >> corte;
	return 0;
}

