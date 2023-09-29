#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness
 *
 * Done by: @Mekonen-Abera
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    return (*c);
}
