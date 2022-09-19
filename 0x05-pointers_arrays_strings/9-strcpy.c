#include "main.h"

/**
 * _strcpy - copy string to another string
 * @dest: pointer
 * @src: pointer
 * Return: numbers dest
 */

char *strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; scr[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
