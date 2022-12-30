#include "main.h"
/**
 * _strch - points to the occurence
 * @s: character
 * @c: string
 * Return: first occurrence of c or NULL
 */
char *_strchr(char *s, char c)
{

	char x;

	while (1)
	{
		x = *s++;
		if (x == c)
			return (s - 1);
		if (!x)
			return (0);
	}
}
