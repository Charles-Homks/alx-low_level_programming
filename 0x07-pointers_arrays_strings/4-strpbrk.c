#include "main.h"

/**
 * _strpbrk - Function searches a string for any of a set of bytes.
 * @s: main String to be search.
 * @accept: Substring for search bytes.
 *
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return ('\0');
}
