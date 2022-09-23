#include "main.h"

/**
 * print_number - function prints an integer values.
 * @n: integer variable to print
 * Return: void
 */
void print_number(int n)
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}

	if (n / 10)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
