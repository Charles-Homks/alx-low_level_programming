#include "main.h"

/**
 * _puts_recursion - Prints string to stdout
 *                   using recursion.
 *
 * @s: String to print.
 *
 * Return: Void.
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
	{
		_putchar('\n');
	}
}
