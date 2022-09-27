#include "main.h"

/**
 * _strspn - Function gets the length of a prefix substring.
 * @s: main String to be search.
 * @accept: Substring for search bytes.
 *
 * Return: the number of bytes in s which consist of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				count++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (count);
		}
		s++;
	}

	return (count);
}
