#include <stdio.h>

/**
 * main - Entry point for code
 *
 * putchar: Sends string to stdout
 *
 * return: Always (0) success
 */
int main(void)
{
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (x != y && y != x)
			{
				putchar(x);
				putchar(y);
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
