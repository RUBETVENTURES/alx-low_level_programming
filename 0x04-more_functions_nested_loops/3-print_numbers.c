#include "main.h"

/**
 * print_numbers - print numbers between 0 to 9
 *
 * Return: 0
 */
int print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
