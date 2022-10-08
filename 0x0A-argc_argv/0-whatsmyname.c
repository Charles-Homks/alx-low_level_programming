#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point of a simple program which writes the
 *	arguments supplied to main on the program's standard output.
 *
 * @argc: contains the number of arguments passed to the program.
 * @argv: one-dimensional array of strings, each string is
 *	one of the arguments that was passed to the program.
 *
 * Return: Success.
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);

	exit(EXIT_SUCCESS);
}
