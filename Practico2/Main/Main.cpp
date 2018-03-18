// Main.cpp: This is the program entry point

#include <iostream>
#include <limits>

#include "Utils.h"

#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_String.h"


int main()
{
	bool verbose = false;
	int log = 0;

	do
	{
		std::cout << "Activar logging? \n"
			<< "1. Si \n"
			<< "2. No \n";
		std::cin >> log;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');

		if (log == 1)
			verbose = true;
		else if (log < 1 || log >  2)
			WARNING("Debe ingresar 1 para aceptar o 2 para cancelar. \n");
	} while (log < 1 || log >  2);

	int option = 0;

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

		std::cin >> option;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		if (option <= 0 || option > 9)
		{
			WARNING("El codigo ingresado no es valido\n");
		}
	} while (option <= 0 || option > 9);

	switch (option)
	{
	case 1:
	{
		int number = 0;
		std::cout << "Ingrese un numero: ";
		std::cin >> number;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		std::cout << "El cuadrado de " << number << " es: " << Square(number, verbose) << ". \n";
		break;
	}

	case 2:
	{
		std::cout << "Ingrese el primer numero: ";
		int sumNumber1 = 0;
		int sumNumber2 = 0;
		std::cin >> sumNumber1;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		std::cout << "Ingrese el segundo numero: ";
		std::cin >> sumNumber2;
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');
		std::cout << "La suma de los dos numeros ingresados es: " << Sum(sumNumber1, sumNumber2, verbose) << ". \n";
		break;
	}

	case 3:
	{
		int radius = 0;
		do
		{
			std::cout << "Ingrese el radio del circulo: ";
			std::cin >> radius;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			if (radius < 0)
				WARNING("El numero ingresado debe ser mayor a 0");
		} while (radius < 0);

		std::cout << "El area del circulo es: " << CircleArea(radius, verbose) << ". \n";

		break;
	}

	case 4:
	{
		std::cout << "Ingrese el primer numero: ";
		int compareNumber1 = 0;
		std::cin >> compareNumber1;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');

		std::cout << "Ingrese el segundo numero: ";
		int compareNumber2 = 0;
		std::cin >> compareNumber2;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');

		std::cout << "El mayor de los dos numeros es: " << Max(compareNumber1, compareNumber2, verbose) << ". \n";
		break;
	}

	case 5:
	{
		Concatenation('A', 'B', verbose);
		break;
	}

	case 6:
	{
		std::cout << "Ingrese el texto a imprimir, usar punto al final: ";
		char str[50];
		std::cin.getline(str, 50, '.');
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<char>::max(), '\n');

		Print(str, verbose);
		break;
	}

	case 7:
	{
		std::cout << "Ingrese una palabra a comparar: ";
		char word1[25];
		std::cin >> word1;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');

		std::cout << "Ingrese segunda palabra a comparar: ";
		char word2[25];
		std::cin >> word2;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<int>::max(), '\n');

		if (Compare(word1, word2, verbose))
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
		int binOption = 0;
		do
		{
			std::cout << "Ingrese un numero para seleccionar una operacion: \n"
				<< "1. AND binario: \n"
				<< "2. OR binario: \n"
				<< "3. Desplazamiento de 2 bits a la derecha: \n"
				<< "4. Desplazamiento de 2 bits a la izquierda: \n";

			std::cin >> binOption;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			if (binOption <= 0 || binOption > 4)
			{
				WARNING("El numero ingresado no es valido");
			}
		} while (binOption <= 0 || binOption > 4);

		switch (binOption)
		{
		case 1:
		{
			int numAND1 = 0, numAND2 = 0;
			std::cout << "Ingrese primer numero: ";
			std::cin >> numAND1;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "Ingrese segundo numero: ";
			std::cin >> numAND2;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "El resultado es: " << BinAND(numAND1, numAND2, verbose) << "\n";
			break;
		}

		case 2:
		{
			int numOR1 = 0, numOR2 = 0;
			std::cout << "Ingrese primer numero: ";
			std::cin >> numOR1;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "Ingrese segundo numero: ";
			std::cin >> numOR2;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "El resultado es: " << BinOR(numOR1, numOR2, verbose) << ". \n";
			break;
		}

		case 3:
		{
			int rightDisplNumber = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> rightDisplNumber;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "El resulado es: " << RightDisplacement(rightDisplNumber, verbose) << ". \n";
			break;
		}

		case 4:
		{
			int leftDiplNumber = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> leftDiplNumber;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "El resultado es: " << LeftDisplacement(leftDiplNumber, verbose) << ". \n";
			break;
		}

		default:
		{
			ERROR(2, "Numero de opcion invalido.\n");
			break;
		}
		}
		break;
	}

	case 9:
	{
		int internOption = 0;
		do
		{
			std::cout << "Ingrese un numero para seleccionar el tipo de datos a intercambiar: \n"
				<< "1. Enteros. \n"
				<< "2. Numeros de punto flotante.\n"
				<< "3. Cadenas de caracteres. \n";
			std::cin >> internOption;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			if (internOption <= 0 || internOption > 3)
				WARNING("El numero inresado debe estar entre 1 y 3");
		} while (internOption <= 0 || internOption > 3);

		switch (internOption)
		{
		case 1:
		{
			int aValue = 0, bValue = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> aValue;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "ingrese valor B: ";
			std::cin >> bValue;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<int>::max(), '\n');

			std::cout << "Los valores A y B son " << aValue << " y " << bValue << " respectivamente. \n";

			Swap(&aValue, &bValue, verbose);

			std::cout << "Los valores A y B son " << aValue << " y " << bValue << " respectivamente. \n";
			break;
		}

		case 2:
		{
			double aFloatValue = 0, bFloatValue = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> aFloatValue;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<double>::max(), '\n');

			std::cout << "ingrese valor B: ";
			std::cin >> bFloatValue;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<double>::max(), '\n');

			std::cout << "Los valores A y B son " << aFloatValue << " y " << bFloatValue << " respectivamente. \n";

			Swap(&aFloatValue, &bFloatValue, verbose);

			std::cout << "Los valores A y B son " << aFloatValue << " y " << bFloatValue << " respectivamente. \n";
			break;
		}

		case 3:
		{
			char strValue1[25], strValue2[25];
			std::cout << "Ingrese una palabra como valor A: ";
			std::cin >> strValue1;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<char>::max(), '\n');

			std::cout << "Ingrese una palabra como valor B: ";
			std::cin >> strValue2;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<char>::max(), '\n');

			std::cout << "Los valores A y B son " << strValue1 << " y " << strValue2 << " respectivamente. \n";

			Swap(strValue1, 25, strValue2, 25, verbose);

			std::cout << "Los valores A y B son " << strValue1 << " y " << strValue2 << " respectivamente. \n";
			break;
		}

		default:
		{
			ERROR(2, "Numero de opcion invalido.\n");
			break;
		}
		}
		break;
	}
	default:
	{
		ERROR(2, "Numero de opcion invalido.\n");
		break;
	}
	}

	std::cout << "Ingrese un numero para finalizar: ";
	int cut = 0;
	std::cin >> cut;
	return 0;
}
