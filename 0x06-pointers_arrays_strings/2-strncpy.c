#include "main.h"

/**
 * _strncpy - function copies the string pointed to by src
 * to the buffer pointed to by dest.
 *
 * @src: Pointer to string source.
 * @dest: Pointer to string destination.
 * @n: number of bytes to copy.
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
