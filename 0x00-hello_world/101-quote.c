#include <unistd.h>

/**
 * main - Entry point
 *
 * write: prints string to stout without using 
 * printf or puts functions
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (0);
}
