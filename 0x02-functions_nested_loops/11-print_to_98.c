#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function prints all the natural numbers
 * starting from n to 98
 *
 * @n: integer variable to initiate function
 * Return: void
 */
void print_to_98(int n)
{
	while (n <= 97)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}

	while (n > 97)
	{
		printf("%d", n);
		if (n != 98)
		{
			putchar(',');
			putchar(' ');
		}
		n--;
	}
	putchar('\n');
}
