//Logging function are declared here
#ifndef UTILS_H
#define UTILS_H

#define FUNCTION_NAME(NAME) (#NAME); //Converts function name to string
#define ERROR(code, msg) logError(__FILE__, __LINE__, code, msg); //Macro to call the logError function
#define WARNING(msg) logWarning(msg); //Macro to call the logWarning function


void logError(const char* file, unsigned int line, int code, const char* msg);

void logWarning(const char* msg);

void logTrace(char* function);

#endif // !UTILS_H



