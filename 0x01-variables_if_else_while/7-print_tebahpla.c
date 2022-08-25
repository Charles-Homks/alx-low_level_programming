#include <stdio.h>

/**
 * main - Prints the Alphabet in Reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha);
		alpha--;
	}

	/* Using the for function:
	for (alpha = 'z'; alpha >= 'a'; alpha--)
	{
		putchar(alpha);
	} */
	putchar('\n');
	return (0);
}
