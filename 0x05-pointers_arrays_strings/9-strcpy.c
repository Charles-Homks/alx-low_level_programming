#include "main.h"

/**
 * _strcpy - function copies the string pointed to by src
 * to the buffer pointed to by dest.
 *
 * @src: Pointer to string source.
 * @dest: Pointer to string destination.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
