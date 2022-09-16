#include "main.h"

/**
 * swap_int - function swaps the values of two integers.
 *
 * @a: Pointer to an int variable 1.
 * @b: Pointer to an int variable 2.
 *
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
