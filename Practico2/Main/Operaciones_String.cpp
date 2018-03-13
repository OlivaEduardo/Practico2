//String comparison is defined here

bool Compare(char str1[], char str2[])
{
	if (sizeof(str1) != sizeof(str2)) //Compare both memory sizes, if they are different, return false
	{
		return false;
	}
	else
	{
		int length = (sizeof(str1) / sizeof(char)); //Get characters number

		for (size_t i = 0; i < length; i++)
		{
			if (str1[i] != str2[i])
			{
				return false;
			}
		}
		return true;
	}
}