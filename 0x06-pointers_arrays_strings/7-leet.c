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
	char a1 = 'a', a2 = 'A';
	char e1 = 'e', e2 = 'E';
	char o1 = 'o', o2 = 'O';
	char t1 = 't', t2 = 'T';
	char l1 = 'l', l2 = 'L';

	while (leet[i])
	{
		if (leet[i] == a1 ||
			leet[i] == a2 ||
			leet[i] == e1 ||
			leet[i] == e2 ||
			leet[i] == o1 ||
			leet[i] == o2 ||
			leet[i] == t1 ||
			leet[i] == t2 ||
			leet[i] == l1 ||
			leet[i] == l2)
		{
			a1 = '4';
			a2 = '4';
			e1 = '3';
			e2 = '3';
			o1 = '0';
			o2 = '0';
			t1 = '7';
			t2 = '7';
			l1 = '1';
			l2 = '1';
		}
	}
	return (leet);
}
