#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	long int x = 1, y = 2, i, z;

	printf("%ld, %ld", x, y);
	for (i = 2; i < 98; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
