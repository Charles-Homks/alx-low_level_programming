#include "main.h"

/**
 * reverse_array - Function reverses an Array.
 * @a: Array of int type
 * @n: Number of element contained in Array
 *
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int start = 0, end = (n - 1), temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
