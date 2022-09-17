#include "main.h"

/**
 * _strlen - function returns the length of a string.
 * @s: Pointer to a string of type char.
 *
 * Return: Length of *s.
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0'; length++)
		;

	return (length);
}
