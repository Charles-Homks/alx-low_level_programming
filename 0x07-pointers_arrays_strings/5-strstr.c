#include "main.h"

/**
 * _strstr - Function searches a string for any of a set of bytes.
 * @s: main String to be search.
 * @accept: Substring for search bytes.
 *
 * Return: a pointer to the byte in s
 * that matches one of the bytes in accept.
 */
char *_strstr(char *haystack, char *needle)
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
