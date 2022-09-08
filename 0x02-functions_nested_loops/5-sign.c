#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 *
 * _putchar - puts character string
 *
 * Return: 1 for positive, 0 for zero
 * and -1 for otherwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		n = 0;
	}
	else
	{
		_putchar('-');
		n = -1;
	}
	return (n);
}
