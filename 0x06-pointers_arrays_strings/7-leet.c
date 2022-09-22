#include "main.h"

/**
 * leet - Function encodes a string into 1337.
 * @leet: String to 1337.
 *
 * Return: 1337.
 */
char *leet(char *leet)
{
	int i = 0;

	while (leet[i])
	{
		if (leet[i] == 'a' || leet[i] == 'A')
		{
			leet[i] = '4';
		} else if (leet[i] == 'e' || leet[i] == 'E')
		{
			leet[i] = '3';
		} else if (leet[i] == 'o' || leet[i] == 'O')
		{
			leet[i] = '0';
		} else if (leet[i] == 't' || leet[i] == 'T')
		{
			leet[i] = '7';
		} else if (leet[i] == 'l' || leet[i] == 'L')
		{
			leet[i] = '1';
		}
		i++;
	}
	return (leet);
}
