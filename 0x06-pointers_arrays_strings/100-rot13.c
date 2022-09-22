#include "main.h"

/**
 * rot13 - Function encodes a string using rot13.
 * @rot13: String in rot13.
 *
 * Return: rot13.
 */
char *rot13(char *rot13)
{
	int i = 0;

	while (rot13[i])
	{
		if ((rot13[i] >= 'A' && rot13[i] <= 'M') ||
			(rot13[i] >= 'a' && rot13[i] <= 'm'))
		{
			rot13[i] += 13;
		} else if ((rot13[i] >= 'N' && rot13[i] <= 'Z') ||
			(rot13[i] >= 'a' && rot13[i] <= 'z'))
		{
			rot13[i] -= 13;
		}
		i++;
	}
	return (rot13);
}
