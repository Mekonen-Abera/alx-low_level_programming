#include<stdio.h>
/**
 * swap_int - swaps the values of two integers
 * It is using two input parameters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 * Done by Mekonen!
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
