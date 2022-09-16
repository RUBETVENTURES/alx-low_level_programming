#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if parameter c prints an uppercase letter
 *
 * @c: return character type
 * Return: 0
 */

int _isupper(int c)
{
	int i = isupper(c);

	if (i > 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
