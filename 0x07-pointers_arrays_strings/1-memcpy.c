#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory destination
 * @src: source
 * @n: bytes to be used
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}