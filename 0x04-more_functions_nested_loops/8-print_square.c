#include "main.h"

/**
 * print_square - function prints square of length size
 * @size: integer variable for length of square
 *
 * Return: void.
 */
void print_square(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
