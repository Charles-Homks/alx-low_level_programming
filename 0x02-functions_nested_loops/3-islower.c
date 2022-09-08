#include "main.h"

/**
 * _islower - checks for lowercase character
 * returns 1 if positive else returns 0
 *
 * _putchar - puts character string
 *
 * Return - 1 for success 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	} else
	{
		return (0);
	}
}
