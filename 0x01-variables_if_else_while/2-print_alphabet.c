#include <stdio.h>

/**
 * main - Prints the Alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}

	/* Using the for function:
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	} */
	putchar('\n');
	return (0);
}
