#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int x = 1, y = 2, i, z;

	printf("%lu, %lu", x, y);
	for (i = 3; i < 98; i++)
	{
		z = x + y;
		printf(", %lu", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
