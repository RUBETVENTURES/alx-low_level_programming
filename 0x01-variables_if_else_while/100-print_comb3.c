#include <stdio.h>
#include <unistd.h>
/**
 * main-Entry point
 *
 * Description: using main function
 * this program prints "All possible differnt combinations of 2 digits
 * Return: 0
 */
int main(void)
{
	int c, i;

	for (c = '0'; c <= '9'; c++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			putchar(c);
			putchar(i);

			if (c != '8' || (c == '8' && i != '9'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
}
putchar('\n');
return (0);