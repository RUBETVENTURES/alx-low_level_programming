#include "main.h"
#include "stdio.h"
/**
 * print_to_98 - print all the numbers between the provided number and 98
 * @n: number to start at
 * return: void
 */

void print_to_98(int n)
{
	int i = 0;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
			{
				printf(", ");
			}
			print ("%d", i);
					}
					}
					else
					{
					for (i = n; i <= 98; i++)
					{
					if (i != n)
					{
					ptintf(", ");
					}
					printf("%d", i);
					}
					}
					_putchar('\n');
					}

