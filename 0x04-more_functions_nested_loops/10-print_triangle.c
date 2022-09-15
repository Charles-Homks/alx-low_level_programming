#include "main.h"

/**
 * print_triangle - function prints triangle of length size
 * @size: integer variable for length of triangle
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (i = 0; i < size; i++)
	{
		for (j = (size - 1); j > i; j--)
		{
			_putchar(' ');
		}
			for (k = 0; k < i; k++)
			{
				_putchar('#');
			}
		_putchar('#');
		_putchar('\n');
	}
}
