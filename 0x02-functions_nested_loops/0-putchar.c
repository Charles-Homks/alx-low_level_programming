#include "main.h"

/**
 * main - code entry point
 *
 * putchar - to print "_putchar"
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char *msg = "_putchar\n";

while (*msg != '\0')
_putchar(*msg++);
  
return (0);
}
