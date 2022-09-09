#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * _putchar - prints character string
 *
 * Return: void
 */
void times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if (b == 0)
			{
				_putchar(c + '0');
			}
			else if (c <= 9 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(c + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			b++;
		}
		_putchar('\n');
		a++;
	}
}
