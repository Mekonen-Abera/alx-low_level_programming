#include "main.h"

/**
 * main-Largest number returns the largest of three numbers
 * @a: First integer number
 * @b: Second integer number
 * @c: third integer number
 * Return:Largest number among the three numbers
 */

int largest_number(int a, int b, int c)
{
  int largest;
  if (a > b && a> c)
   {
     largest = a;
   }
  else if (a > b && c > a)
   {
     largest = c;
   }
  else if (b > c)
   {
   largest = b;
   }
  else
   {
largest = c;
   }
return (largest);
}
