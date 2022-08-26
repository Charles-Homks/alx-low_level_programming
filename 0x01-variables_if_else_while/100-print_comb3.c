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
