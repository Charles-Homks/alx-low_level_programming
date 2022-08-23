#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char Dora[59] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	size_t size = sizeof(Dora);

	write(1, Dora, size);

	return (1);
}
