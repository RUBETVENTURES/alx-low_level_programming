#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory destination
 * @src: source
 * @n: bytes to be used
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char src, unsigned int n)
{
	char *w = dest;

	while (n--)
	{
		*dest++ = *src--;
	}
	return (w);
}
