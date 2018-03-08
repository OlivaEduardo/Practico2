//Aqui se declararan las operaciones de intercambio de variables

#ifndef OP_LOGICAS_H
#define OP_LOGICAS_H

void swap(int* px, int* py ) 
{
	int aux = *px;
	*px = *py;
	*py = aux;
}

void swap(double* px, double* py)
{
	double aux = *px;
	*px = *py;
	*py = aux;
}

#endif // !OP_LOGICAS_H
