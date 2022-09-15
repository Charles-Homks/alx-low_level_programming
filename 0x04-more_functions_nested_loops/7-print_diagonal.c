#include "main.h"

/**
 * print_diagonal - function pints diagonals instead of numbers
 * @n: integer variable length of diagonal
 *
 * Return: void.
 */
void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j < i)
		{
			_putchar(' ');
			j++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
