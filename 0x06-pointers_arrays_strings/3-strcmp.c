#include "main.h"

/**
 * _strcmp - Compares two strings.
 * @s1: String 1
 * @s2: String 2
 * Return: 0 if same; less-than 0 if s1 is lower than s2;
 *         more-than 0 if s1 is greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if ((*s1 - *s2) == 0)
			return (0);
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
