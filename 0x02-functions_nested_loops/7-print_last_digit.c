   #include "main.h"
   /**
   * print_last_dgt - prints the last dgt
   * @n: the number 
   *
   * Return: value of the last dgt
   */
  int print_last_dgt(int n)
      {
         int ld = (n % 10);

           if (ld < 0) 
              ld *= -1;


           _putchar(ld + '0') 

       return (ld);
    } 
         
