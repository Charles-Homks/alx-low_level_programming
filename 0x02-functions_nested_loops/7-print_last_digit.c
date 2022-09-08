#include "main.h"

/**
 * print_last_digit - function prints the last digit of a given number
 *
 * _putchar - prints character string
 * @n: integer variable to initiate function
 *
 * Return: value of variable c
 */
int print_last_digit(int n)
{
	int c;

	c = n % 10;

	if (n < 0)
	{
		c = -c;
	}
	_putchar('0' + c);
	return (c);
}
