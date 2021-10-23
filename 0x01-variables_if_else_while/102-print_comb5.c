#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int x, y;
	int i, j;

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			for (i = '0'; i <= '9'; i++)
			{
				for (j = '0'; j <= '9'; j++)
				{
					if (x <= y || x >= y)
					{
						if (i <= j || i >= j)
						{
							if (i != x || j != y)
							{
								putchar(x);
								putchar(y);
								putchar(' ');
								putchar(i);
								putchar(j);
								putchar(',');
								putchar(' ');
							}
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
