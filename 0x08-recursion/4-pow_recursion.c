#include "main.h"

/**
 */
int _pow_recursion(int x, int y)
{
	int i, pow = 1;

	for (i = 1; i <= y; i++)
	{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		pow *= x;
	}
	}
	return (pow);
}
