#include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 *
 * print_alphabet_x10 - print lower case alphabet 10 times.
 */
void print_alphabet_x10(void)
{
int count;
char ch;
for (count = 0; count <= 9; count++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
