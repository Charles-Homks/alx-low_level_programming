#include "main.h"

/**
 * puts_half - Prints last half of a string to stdout.
 * @str: String to print.
 *
 * Return: Void.
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	if (i % 2 == 0)
	{
		i /= 2;
	}
	else if (i % 2 != 0)
	{
		i = (i - 1) / 2;
	}

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
