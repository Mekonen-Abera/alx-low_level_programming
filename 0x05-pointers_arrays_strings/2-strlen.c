#include<stdio.h>
/**
 * _strlen - returns the length of a string
 *
 * @s: string parameter input
 *
 * Return: length of string
 * Done by @Mekonen-Abera
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
		++counter;

	return (counter);
}
