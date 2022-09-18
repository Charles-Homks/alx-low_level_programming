#include "main.h"

/**
 * puts2 - Prints every second character of a string to stdout.
 * @str: String to print.
 *
 * Return: Void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
