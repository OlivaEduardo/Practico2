//Aqui se definiran las operaciones binarias

int DesplazamientoIzquierda(int x)
{
	return x << 2; //Desplaza 2 bits a izquierda
}

int DesplazamientoDerecha(int x)
{
	return x >> 2; //Desplaza 2 bits a derecha
}

int BinAND(int x, int y)
{
	return x & y;
}

int BinOR(int x, int y)
{
	return x | y;
}