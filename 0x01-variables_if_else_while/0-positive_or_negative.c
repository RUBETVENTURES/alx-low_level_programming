#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Print if the number is positve, zero or negative
 * 
 * Description: using the main function
 * this program prints "Programming is positive,zero or negative
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*your code goes there*/
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
