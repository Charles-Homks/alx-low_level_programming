#include "main.h"
#include <stdio.h>

/**
 * _atoi - function converts a string to an integer value.
 * @s: Pointer to String
 *
 * Return: int value of string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - 48);
		else if (*s == '-')
			sign *= -1;
		else if (num > 0)
			break;
	} while (*s++);

	return (sign * num);
}
