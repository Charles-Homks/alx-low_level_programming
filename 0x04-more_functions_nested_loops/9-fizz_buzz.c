#include <stdio.h>

/**
 * main - Program that prints the numbers from 1 to 100.
 * But for multiples of three program prints Fizz instead,
 * and for the multiples of five program prints Buzz.
 * For multiples of both three and five prints FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n == 100)
		{
			printf("Buzz\n");
		} else
		{
		if (n % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", n);
		}
		}
	}
	return (0);
}
