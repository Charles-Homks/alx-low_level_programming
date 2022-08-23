#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %u byte\n", sizeof(char));
	printf("Size of an int: %u byte\n", sizeof(int));
	printf("Size of a long int: %u byte\n", sizeof(long int));
	printf("Size of a long long int: %u byte\n", sizeof(long long int));
	printf("Size of a float: %u byte\n", sizeof(float));

	return (0);
}
