//Aqui se declararan las operaciones de intercambio de variables

#ifndef OP_LOGICAS_H
#define OP_LOGICAS_H

void swap(int* ptrx, int* ptry ) 
{
	int aux = *ptrx;
	*ptrx = *ptry;
	*ptry = aux;
}

void swap(double* ptrx, double* ptry)
{
	double aux = *ptrx;
	*ptrx = *ptry;
	*ptry = aux;
}

void swap(char ptrx[], char ptry[])
{

}

#endif // !OP_LOGICAS_H
