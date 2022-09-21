#include "main.h"

/**
 * _strncat - function concats n bytes of the string pointed to by src
 * to the buffer pointed to by dest.
 *
 * @src: Pointer to string source.
 * @dest: Pointer to string destination.
 * @n: number of bytes to cat.
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		++i;
	}

	for (j = 0; src[j] && j < n; ++i, ++j)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
