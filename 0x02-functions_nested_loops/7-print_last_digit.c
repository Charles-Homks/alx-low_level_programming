#include "main.h"

/**
 * print_last_digit - function prints the last digit of a given number
 *
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
	return (c);
}
