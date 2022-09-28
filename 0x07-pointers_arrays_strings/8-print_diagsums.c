#include "main.h"

/**
 * print_diagsums - function compiles sum of the two diagonals
 *                  of a square matrix of integers
 *
 * @a: Pointer to square matrix
 * @size: Size of square matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += *(a + i * size + i);
	}
	for (j = 0; j < size; j++)
	{
		sum2 += *(a + size * (j + 1) - (j + 1));
	}

	printf("%d, %d\n", sum1, sum2);
}
