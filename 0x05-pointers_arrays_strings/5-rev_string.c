#include "main.h"

/**
 * rev_string - Function reverses a String.
 * @s: String to reverse.
 *
 * Return: Void.
 */
void rev_string(char *s)
{
	int i = 0, len, temp;

	for (len = 0; s[len] != '\0'; len++)
		;

	while (i < len / 2)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
		i++;
	}
}
