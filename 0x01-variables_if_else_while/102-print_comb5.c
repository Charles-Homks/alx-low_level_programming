#include <stdio.h>

/**
 * main - Program prints all possible different combinations of
 *	two digits numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int i = '0', j;

	while (i <= '9')
	{
		j = '0';
		while (j <= '9')
		{
			if (j > i)
			{
				putchar(i);
				putchar(j);
				if (i != '8' || j != '9')
				{
				putchar(',');
				putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
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
