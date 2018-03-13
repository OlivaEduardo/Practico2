//Binary operations are defined here

int LeftDisplacement(int x)
{
	return x << 2; //2 bits left displacement
}

int rightDisplacement(int x)
{
	return x >> 2; //2 bits right displacement
}

int BinAND(int x, int y)
{
	return x & y;
}

int BinOR(int x, int y)
{
	return x | y;
}