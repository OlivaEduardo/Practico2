//Definicion de comparacion de cadenas de caracteres

bool Comparacion(char Cadena1[], char Cadena2[])
{
	if (sizeof(Cadena1) != sizeof(Cadena2)) //Comparamos el espacio de memoria de ambos, si es distinto devolvemos false
	{
		return false;
	}
	else
	{
		int length = (sizeof(Cadena1) / sizeof(char)); //Obtenemos la cantidad de caracteres de la cadena

		for (size_t i = 0; i < length; i++)
		{
			if (Cadena1[i] != Cadena2[i])
			{
				return false;
			}
		}
		return true;
	}
}