#include "main.h"

/**
 * _isdigit - checks for digital character
 * returns 1 if positive else returns 0
 *
 * _putchar - puts character string
 * @c: integer return variable
 *
 * Return: 1 for success 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
	} else
	{
		c = 0;
	}
	return (c);
}
