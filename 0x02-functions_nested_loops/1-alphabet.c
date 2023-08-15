#include "main.h"
/**
 * a function that prints the alphabet
 *
 * Description: prints  in lowercase, followed by a new line
 * Return: 0 always
 */
void print_alphabet(void)
{
	int i; 

	for(i = 97; i <= 122; i++)
	{
		_putchar(i); 
	}
	_putchar('\n'); 
}
