#include "main.h"

/**
 * print_alphabet - Prints the alphabets in small case
 *
 * return: Always 0 Successful
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
