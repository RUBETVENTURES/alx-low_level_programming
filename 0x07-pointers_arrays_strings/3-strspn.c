#include "main.h"
/**
 * _strspn - get the length of a string
 * @s: string to be searched
 * @accept: byte to be accepted
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{

	unsigned int w, y;

	for (w = 0; s[w]; w++)
	{
		for (y = 0; accept[y]; y++)
		{
			if (accept[y] == s[w])
				break;
		}
		if (!accept[y])
			break;
	}
	return (w);
}
