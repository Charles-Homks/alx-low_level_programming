#include "main.h"

/**
 * _puts - Prints string to stdout.
 * @str: String to print.
 *
 * Return: Void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
