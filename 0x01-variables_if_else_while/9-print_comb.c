#include <stdio.h>

/**
 * main - Entry point for code
 *
 * putchar: Sends string to stdout
 *
 * return: Always (0) successful
 */
int main(void)
{
	char x;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	if (x != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
