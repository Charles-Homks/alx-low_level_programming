#include "main.h"

/**
 * main - Entry point for code
 *
 * _putchar: prints characters in stdout
 *
 * return: Return value of code; 0
 */
int main(void)
{
	char *ch = "_putchar";

	while (*ch != '\0')
	{
		_putchar(*ch);
		ch++;
	}
	_putchar('\n');
	return (0);
}
