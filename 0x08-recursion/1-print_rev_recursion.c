#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @s: The string to be printed
 * Done by @Mekonen-Abera 2023, AA
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
