#include "main.h"
#include <stdio.h>

/**
 * print_rev - Prints string, in reverse.
 * @s: String to print.
 *
 * Return: Void.
 */
void print_rev(char *s)
{
	int i = 0;

	for (; s[i]; i++)
		;
	while (i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
