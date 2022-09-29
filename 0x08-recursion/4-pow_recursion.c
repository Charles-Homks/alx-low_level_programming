#include "main.h"

/**
 * _pow_recursion - function calculates the value of the number x
 *                  raised to the power of y.
 * @x: Integer number.
 * @y: Power of.
 *
 * Return: value of x raised to power y.
 */
int _pow_recursion(int x, int y)
{
	int power;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		power = x * _pow_recursion(x, (y - 1));
	}

	return (power);
}
