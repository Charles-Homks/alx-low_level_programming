#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x = 1, y = 2, i, z;
	long int max = 4000000;
	long int sum = y;

	for (i = 1; i < 49; i++)
	{
		z = x + y;
		x = y;
		y = z;
		if (y < max)
		{
			if (y % 2 == 0)
			{
				sum += y;
			}
		}
	}
	printf("%ld", sum);
	printf("\n");
	return (0);
}
