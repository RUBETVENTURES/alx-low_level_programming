#include <unistd.h>

/**
 * _putchar - writes the character to stdout
 *
 * Return: On success 1.
 * on error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char)
{
	return (write(1, &c, 1));
}
