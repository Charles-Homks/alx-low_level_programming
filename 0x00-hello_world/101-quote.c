#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char DK[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t size = sizeof(DK);

	write(1, DK, size);

	return (1);
}
