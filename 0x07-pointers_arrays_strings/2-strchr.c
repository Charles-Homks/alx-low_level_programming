#include "main.h"

/**
 * _strchr - Function locates a character in a string.
 * @s: String.
 * @c: Character to locate.
 *
 * Return: String s.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return ('\0');
}
