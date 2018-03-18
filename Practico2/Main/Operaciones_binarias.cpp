//Binary operations are defined here
#include "utils.h";

int LeftDisplacement(int x, bool trace)
{
	if(trace)
		TRACE();
	return x << 2; //2 bits left displacement
}

int RightDisplacement(int x, bool trace)
{
	if(trace)
		TRACE();
	return x >> 2; //2 bits right displacement
}

int BinAND(int x, int y, bool trace)
{
	if(trace)
		TRACE();
	return x & y;
}

int BinOR(int x, int y, bool trace)
{
	if(trace)
		TRACE();
	return x | y;
}