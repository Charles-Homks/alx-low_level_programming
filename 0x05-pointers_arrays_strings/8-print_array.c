#include "main.h"
#include <stdio.h>

/**
 * print_array - function prints n elements of an array of integers.
 *
 * @a: pointer to an array.
 * @n: number of elements of the array.
 *
 * Return: Void.
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (i == (n - 1))
		{
			printf("%d\n", *(a + i));
		}
		else
		{
			printf("%d, ", *(a + i));
		}
		i++;
	}
}
