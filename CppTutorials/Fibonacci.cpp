#include "Fibonacci.h"

int Fibonacci::recursive(int x)
{
	if ((x == 1) || (x == 0))
	{
		return(x);
	}
	else
	{
		return(recursive(x - 1) + recursive(x - 2));
	}
}

int Fibonacci::iterative(int x)
{
	int previous = 1;
	int current = 1;
	int next = 1;
	for (int i = 3; i <= x; ++i)
	{
		next = current + previous;
		previous = current;
		current = next;
	}
	return next;
}
