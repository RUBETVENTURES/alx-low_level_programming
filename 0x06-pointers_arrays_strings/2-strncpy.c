#include "main.h"

/**
 * _strncpy - two nwords
 * @dest: pointer to char
 * @src: pointer to char
 * @n: integer
 * Return: *dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; srrc[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';

	}
	return (dest);
}
