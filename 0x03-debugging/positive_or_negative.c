#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - function that prints if integer is positive or negative
 *
 * Return: Always 0 (success)
*/
void positive_or_negative(int i)
{

/*	srand(time(0));
	n = rand() - RAND_MAX / 2;	*/

	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i == 0)
	{
		printf("%d is zero\n", i);
	} else
	{
		printf("%d is negative\n", i);
	}
	return;
}
