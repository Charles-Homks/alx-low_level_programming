#include "main.h"

/**
 * _isupper - checks for uppercase character
 * returns 1 if positive else returns 0
 *
 * _putchar - puts character string
 * @c: integer return variable
 *
 * Return: 1 for success 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
