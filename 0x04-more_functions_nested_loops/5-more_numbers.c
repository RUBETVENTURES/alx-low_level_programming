#include "main.h"
#include <stdio.h>

/**
 * more_numbers - print 10 times the numbers from 0 to 14 inc
 *
 * Return: void
 */

void more_numbers(void)
{
	int i;
	int x;

	for (x = 1; x <= 10; x++)
	{
		i = 0;
		while (i <= 14)
		{
			if (i >= 10)
			{
				_putchar(i / 10 + '0');
			}
			_putchar(1 % 10 + '0');
				i++;
		}
	_putchar('\n');
	}
}
