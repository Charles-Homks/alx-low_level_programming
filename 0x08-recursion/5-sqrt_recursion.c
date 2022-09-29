#include "main.h"

/**
 */
int _sqrt_recursion(int n)
{
	int i, sqrt;

	for (i = 2; i < 100; i++)
	{
		if (n == 1)
		{
			sqrt = 1;
		}
		else if ((n / i) == i)
		{
			sqrt = i;
		}
	}
	return (sqrt);
}
