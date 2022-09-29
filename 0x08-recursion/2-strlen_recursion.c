#include "main.h"

/**
 * _strlen_recursion - function returns the length of a string
 * using recursion.
 * @s: String.
 *
 * Return: Length of *s.
 */
int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length += 1;
		length += _strlen_recursion(s + 1);

	}

	return (length);
}
