#include "main.h"
/**
 * _strstr - ponter to substring
 * @haystack: pointer a
 * @needle: string to cut
 * Return: pointer of choice
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *i = haystack;
		char *j = needle;

		while (*haystack && *j && *haystack == *j)
		{
			haystack++;
			j++;
		}
		if (!*j)
			return (i);

		haystack = i + 1;
	}
	return ('\0');
}
