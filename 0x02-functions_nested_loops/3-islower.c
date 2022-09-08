#include "main.h"

/**
 * _islower - checks for lowercase character
 * returns 1 if positive else returns 0
 *
 * _putchar - puts character string
 * @c: integer return variable
 *
 * Return: 1 for success 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
