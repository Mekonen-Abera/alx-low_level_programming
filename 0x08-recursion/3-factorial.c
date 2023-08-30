#include "main.h"

/**
 * factorial - returns the factorial of a number
 * @n: number to return the factorial from
 * Return: factorial of n
 * By @Mekonen-Abera 2023, AA
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
