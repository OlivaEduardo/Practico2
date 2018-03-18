//Logging functions are defined here

#include <iostream>

void logError(const char* file, unsigned int line, int code, const char* msg)
{
	std::cout << "Error en el archivo " << file << " linea " << line << " codigo " << code << ": " << msg << "\n";
}

void logWarning(const char* msg)
{
	std::cout << "Error: " << msg << "\n";
}

void logTrace(const char* file, unsigned int line, const char* function)
{
	std::cout << "Funcion invocada: " << function << "\nArchivo: " << file << "\nLinea: " << line << "\n";
}