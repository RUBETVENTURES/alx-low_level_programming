#include "main.h"
/**
 * _strstr - ponter to substring
 * @haystack: pointer a
 * @needle: string to cut
 * Return: pointer of choice
 */
char *_strstr(char *haystack, char *needle)
{

	char *w, *x;

	x = needle;

	if (!*x)
		return (haystack);
	for (; haystack != 0; haystack++)
	{
		if (*haystack != *x)
			continue;
		w = haystack;
		while (1)
		{
			if (!*x)
				return (haystack);
			if (*w++ != *x++)
				break;
		}
		x = needle;
	}
	return (0);
}
