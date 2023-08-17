#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: print the character
 *
 * Return: On success 1 always
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
