#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print if the number is positve, zero or negative
 * 
 * Description: using the main function
 * this program prints "Programming is postive,  zero or negative
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RABD_MAX / 2;
	/*your code goes there*/
	if (n > )
	{
		printf("%i is positive\m", n);
	}
	else if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	else if (n < )
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
