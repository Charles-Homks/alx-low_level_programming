#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * _putchar - puts character string
 *
 * Return - 0 for success
 */
void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + '0');
	}
	_putchar('\n');

}
