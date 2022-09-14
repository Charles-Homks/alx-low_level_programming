#include "main.h"

/**
 * print_line - function pints lines instead of numbers
 * @n: integer variable
 *
 * Return: void.
 */
void print_line(int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
