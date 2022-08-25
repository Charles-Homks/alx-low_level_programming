#include <stdio.h>

/**
 * main - Prints numbers of base 16 starting from 0 in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x = '0';
	char alpha = 'a';

	while (x <= '9')
	{
		putchar(x);
		x++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
