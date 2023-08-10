#include <stdio.h>
/**
    * main - main block
    * Return: 0
    */
int main(void)
{
   char a;
   int i;
   long int j;
   long long int l;
   float f;
	printf("Size of a char: %i byte(s)\n", sizeof(a));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %i byte(s)\n", sizeof(j));
	printf("Size of a long long int: %i byte(s)\n", sizeof(l));		               printf("Size of a float: %i byte(s)\n", sizeof(f));
       	return (0);
}	    
