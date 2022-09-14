#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * _putchar - prints character string.
 * @n: integer return variable.
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int a, b, c;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			} else if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			} else if (c <= 99 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			} else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 100) + '0');
				_putchar(((c / 10) % 10) + '0');
				_putchar((c % 10) + '0');
			}
		}
		_putchar('\n');
	}
	}
}
