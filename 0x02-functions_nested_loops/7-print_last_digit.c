   #include "main.h"
   /**
   * print_last_digit - prints the last digit numbers
   * @n: the number 
   *
   * Return: value of the last digit number
   */
 int print_last_digit(int n)
{
	int num;

	if (n < 0)
		n = -n;

	num = n % 10;

	if (num < 0)
		num = -num;

	_putchar(num + '0');

	return (num);
}
         
