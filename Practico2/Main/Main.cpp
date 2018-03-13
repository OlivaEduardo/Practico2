// Main.cpp: This is the program entry point

#include <iostream>
#include "Utils.h"

#include "Operaciones_matematicas.h"
#include "Operaciones_preprocesador.h"
#include "Operaciones_binarias.h"
#include "Operaciones_logicas.h"
#include "Operaciones_String.h"


int main()
{
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
		if (option <= 0 || option > 9)
		{
			ERROR(1, "El codigo ingresado no es valido\n");
		}
	} while (option <= 0 || option > 9);

	switch (option)
	{
	case 1:
	{
		std::cout << "Ingrese un numero: ";
		int number = 0;
		std::cin >> number;
		std::cout << "El cuadrado de " << number << " es: " << Square(number) << ". \n";
		char funcName[] = FUNCTION_NAME(Square(number));
		logTrace(funcName);
		break;
	}

	case 2:
	{
		std::cout << "Ingrese el primer numero: ";
		int sumNumber1 = 0;
		int sumNumber2 = 0;
		std::cin >> sumNumber1;
		std::cout << "Ingrese el segundo numero: ";
		std::cin >> sumNumber2;
		std::cout << "La suma de los dos numeros ingresados es: " << Sum(sumNumber1, sumNumber2) << ". \n";
		char funcName2[] = FUNCTION_NAME(Sum(sumNumber1, sumNumber2));
		logTrace(funcName2);
		break;
	}
		
	case 3:
	{
		std::cout << "Ingrese el radio del circulo: ";
		int radius = 0;
		std::cin >> radius;
		std::cout << "El area del circulo es: " << CircleArea(radius) << ". \n";
		char funcName3[] = FUNCTION_NAME(CircleArea(radius));
		logTrace(funcName3);
		break;
	}
		
	case 4:
	{
		std::cout << "Ingrese el primer numero: ";
		int compareNumber1 = 0;
		std::cin >> compareNumber1;
		std::cout << "Ingrese el segundo numero: ";
		int compareNumber2 = 0;
		std::cin >> compareNumber2;
		std::cout << "El mayor de los dos numeros es: " << Max(compareNumber1, compareNumber2) << ". \n";
		char funcName4[] = FUNCTION_NAME(Max(compareNumber1, compareNumber2));
		logTrace(funcName4);
		break;
	}
		
	case 5:
	{
		Concatenation('A', 'B');
		char funcName5[] = FUNCTION_NAME(Concatenation('A', 'B'));
		logTrace(funcName5);
		break;
	}
		
	case 6:
	{
		std::cout << "Ingrese el texto a imprimir, usar punto al final: ";
		char str[50];
		std::cin.getline(str, 50, '.');
		Print(str);
		char funcName6[] = FUNCTION_NAME(Print(str));
		logTrace(funcName6);
		break;
	}
		
	case 7:
	{
		std::cout << "Ingrese una palabra a comparar: ";
		char word1[25];
		std::cin >> word1;
		std::cout << "Ingrese segunda palabra a comparar: ";
		char word2[25];
		std::cin >> word2;
		if (Compare(word1, word2))
		{
			std::cout << "Ambas palabras son iguales. \n";
		}
		else
		{
			std::cout << "Ambas palabras son distintas. \n";
		}
		char funcName7[] = FUNCTION_NAME(Compare(word1, word2));
		logTrace(funcName7);
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
		} while (binOption <= 0 || binOption > 4);

		switch (binOption)
		{
		case 1:
		{
			int numAND1 = 0, numAND2 = 0;
			std::cout << "Ingrese primer numero: ";
			std::cin >> numAND1;
			std::cout << "Ingrese segundo numero: ";
			std::cin >> numAND2;
			std::cout << "El resultado es: " << BinAND(numAND1, numAND2) << "\n";
			char funcName8[] = FUNCTION_NAME(BinAND(numAND1, numAND2));
			logTrace(funcName8);
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
			char funcName9[] = FUNCTION_NAME(BinOR(numOR1, numOR2));
			logTrace(funcName9);
			break;
		}
			
		case 3:
		{
			int rightDisplNumber = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> rightDisplNumber;
			std::cout << "El resulado es: " << RightDisplacement(rightDisplNumber) << ". \n";
			char funcName10[] = FUNCTION_NAME(RightDisplacement(rightDisplNumber));
			logTrace(funcName10);
			break;
		}
			
		case 4:
		{
			int leftDiplNumber = 0;
			std::cout << "Ingrese un numero: ";
			std::cin >> leftDiplNumber;
			std::cout << "El resultado es: " << LeftDisplacement(leftDiplNumber) << ". \n";
			char funcName11[] = FUNCTION_NAME(LeftDisplacement(leftDiplNumber));
			logTrace(funcName11);
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
		} while (internOption <= 0 || internOption > 3);

		switch (internOption)
		{
		case 1:
		{
			int aValue = 0, bValue = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> aValue;
			std::cout << "ingrese valor B: ";
			std::cin >> bValue;
			std::cout << "Los valores A y B son " << aValue << " y " << bValue << " respectivamente. \n";

			Swap(&aValue, &bValue);
			char funcName12[] = FUNCTION_NAME(Swap(&aValue, &bValue));
			logTrace(funcName12);

			std::cout << "Los valores A y B son " << aValue << " y " << bValue << " respectivamente. \n";
			break;
		}
			
		case 2:
		{
			double aFloatValue = 0, bFloatValue = 0;
			std::cout << "Ingrese valor A: ";
			std::cin >> aFloatValue;
			std::cout << "ingrese valor B: ";
			std::cin >> bFloatValue;
			std::cout << "Los valores A y B son " << aFloatValue << " y " << bFloatValue << " respectivamente. \n";

			Swap(&aFloatValue, &bFloatValue);
			char funcName13[] = FUNCTION_NAME(Swap(&aFloatValue, &bFloatValue));
			logTrace(funcName13);

			std::cout << "Los valores A y B son " << aFloatValue << " y " << bFloatValue << " respectivamente. \n";
			break;
		}
			
		case 3:
		{
			char strValue1[25], strValue2[25];
			std::cout << "Ingrese una palabra como valor A: ";
			std::cin >> strValue1;
			std::cout << "Ingrese una palabra como valor B: ";
			std::cin >> strValue2;
			std::cout << "Los valores A y B son " << strValue1 << " y " << strValue2 << " respectivamente. \n";

			Swap(strValue1, 25, strValue2, 25);
			char funcName14[] = FUNCTION_NAME(Swap(strValue1, 25, strValue2, 25));
			logTrace(funcName14);

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

