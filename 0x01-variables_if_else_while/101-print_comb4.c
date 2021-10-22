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
	int x, y, z;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (z = '0'; z <= '9'; z++)
			{
				if (x < y && y < z)
				{
					putchar(x);
					putchar(y);
					putchar(z);

					if (x != y && y != z)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
