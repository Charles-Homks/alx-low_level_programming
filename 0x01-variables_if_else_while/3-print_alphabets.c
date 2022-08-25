#include <stdio.h>

/**
 * main - Prints the Alphabet both lower and UPPER
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';
	char UPC = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (UPC <= 'Z')
	{
		putchar(UPC);
		UPC++;
	}

	putchar('\n');
	return (0);
}
