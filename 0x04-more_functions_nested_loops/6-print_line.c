#include"main.h"

/**
 * print_line - print a straight line
 *
 * @n: n is the number of times the character _ should be printed
 * The line should end with a \n
*/

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; ++lnChr)
			_putchar('_');
		_putchar('\n');
	}
}
