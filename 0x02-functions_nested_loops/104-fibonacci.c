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
	for (i = 0; i < 50; i++)
	{
		z = x + y;
		printf(", %ld", z);
		x = y;
		y = z;
	}
	printf("\n");
	return (0);
}
