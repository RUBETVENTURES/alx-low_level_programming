#include "main.h"

/**
 *print_numbers - print numbers between 0 to 9
 *
 * @i: character to print
 *Return: void
 */
int print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
