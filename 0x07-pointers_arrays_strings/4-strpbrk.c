#include "main.h"
/**
 * _strpbrk - string to break
 * @s: string to search
 * @accept: byte to accept
 * Return:
 * pointer to bytes
 */
char *_strpbrk(char *s, char *accept)
{

	int w;

	while (*s)
	{
		for (w = 0; accept[w]; w++)
			if (*s == accept[w])
				return (s);
		s++;
	}
	return (0);
}
