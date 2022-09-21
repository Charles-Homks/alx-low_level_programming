#include "main.h"

/**
 * _strcat - function concatenates the string pointed to by src
 * to the buffer pointed to by dest.
 *
 * @src: Pointer to string source.
 * @dest: Pointer to string destination.
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
