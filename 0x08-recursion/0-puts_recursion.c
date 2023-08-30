#include "main.h"
/**
 * _puts_recursion - function like puts();
 * @s: input
 * Return: Always 0 (Success)
 * Done by @Mekonen-Abera 2023,AA
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
