#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 separated by commas,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = '0';

	while (x <= '9')
	{
		putchar(x);
		putchar(',');
		putchar(' ');
		x++;
	}
	putchar(10);
	return (0);
}
