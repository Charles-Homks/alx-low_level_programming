#include <stdio.h>

/**
 * main - Program prints all possible different combinations of
 *	three digits numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int m, n, o;

	for (m = '0'; m <= '9'; m++)
	{
		for (n = '0'; n <= '9'; n++)
		{
			for (o = '0'; o <= '9'; o++)
			{
				if (n > m && o > n)
				{
					putchar(m);
					putchar(n);
					putchar(o);
					if (m != '7' || n != '8' || o != '9')
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
