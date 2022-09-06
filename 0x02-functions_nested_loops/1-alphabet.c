#include "main.h"

/**
 * print_alphabet - prints all alphabets in lower case
 *
 * _putchar - puts character string
 *
 * Return - 0 for success
 */
void print_alphabet(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

}
