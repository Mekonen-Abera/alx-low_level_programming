#include"main.h"

/**
 * print_alphabet_10_times - function that will print the alphabet 10 times
 *
 * Return:0 always (success)
*/

void print_alphabet_x10(void)
{
	int i;
	int j;

	for(i= 1; i <= 10;i++)
	{
	for(j= 97;j<= 122;j++)
		_putchar(j);
		_putchar('\n');
	}
}
