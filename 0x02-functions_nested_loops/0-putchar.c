#include "main.h"

/**
 * main - Code Entry Point;
 *
 * _putchar - writes the character c to stdout
 *
 * Return: On success 0.
 * On error, any other value is returned.
 */
int main(void)
{
	char *ptc = "_putchar\n";

	while (*ptc != '\0')
	{
	_putchar(*ptc);
	ptc++;
	}

	return (0);
}
