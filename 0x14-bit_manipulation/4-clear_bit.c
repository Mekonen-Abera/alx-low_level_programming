#include "main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 * @n: pointer to the number
 * @index: is the index, starting from 0 of the bit you want to set
 *
 * Done by: @Mekonen-Abera
 * Return: 1 for success, -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
