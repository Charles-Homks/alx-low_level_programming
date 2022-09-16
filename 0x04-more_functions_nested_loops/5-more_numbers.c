#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9,
 * 10 times followed by a new line
 *
 * _putchar - puts character string
 *
 * Return - void
 */
void more_numbers(void)
{
	int i;
	char n, c;

	for (i = 0; i < 10; i++)
	{
	for (n = 0; n <= 14; n++)
	{
		if (n >= 10)
		{
			_putchar('1');
			c = n % 10;
		} else
		{
			c = n;
		}
		_putchar(c + '0');
	}
	_putchar('\n');
	}

}
