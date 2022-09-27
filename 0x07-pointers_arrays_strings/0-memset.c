#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the block of memory to fill
 * @b: value to set
 * @n: number of bytes to set to value
 * Return: pointer to the memory area s 
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *w = s;

	while (n--)
	{
		*s++ = b;
	}
	return (w);
}
