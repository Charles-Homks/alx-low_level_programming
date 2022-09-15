#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	long int m = 612852475143;
	long int n, value;

	for (n = 2; n <= m; n++)
	{
		if (m % n == 0)
		{
			m = m / n;
			value = n;
		}
	}
	printf("%ld\n", value);
	return (0);
}
