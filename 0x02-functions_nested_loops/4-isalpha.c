#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * returns 1 if positive else returns 0
 *
 * _putchar - puts character string
 * @c: integer return variable
 *
 * Return: 1 for success 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
