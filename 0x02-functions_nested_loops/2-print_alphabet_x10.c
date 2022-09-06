#include "main.h"

/**
 * print_alphabet_x10 - prints all alphabets in lower case
 * 10 times followed by a new line
 *
 * _putchar - puts character string
 *
 * Return - 0 for success
 */
void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 0; i < 10; i++)
	{
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
	}

}
