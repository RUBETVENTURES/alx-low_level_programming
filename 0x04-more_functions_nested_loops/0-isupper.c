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
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
