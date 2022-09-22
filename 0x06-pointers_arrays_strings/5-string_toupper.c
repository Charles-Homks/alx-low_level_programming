#include "main.h"


/**
 * string_toupper - Converts all lowercase letters of string
 * to Uppercase.
 *
 * @str: String to convert.
 *
 * Return: UPPERCASE value of *str.
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
	}

	return (str);
}
