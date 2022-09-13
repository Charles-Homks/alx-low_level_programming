#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
	int x = 1, y = 2, i;
	long z;

	printf("%d, %d", x, y);
	for (i = 1; i < 49; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
