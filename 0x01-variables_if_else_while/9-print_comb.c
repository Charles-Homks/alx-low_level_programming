#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 separated by commas,
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 48;

	while (x <= 57)
	{
		putchar(x);
		if (x != 57)
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar(10);
	return (0);
}
