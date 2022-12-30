#include "main.h"
#include <stdio.h>

/**
 * _isdigit - function that checks a digit
 *
 * @c: return int type
 * Return: return 0 on success and 1 in fail
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
