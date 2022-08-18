/**
	* print_sign - prints the sign (negative or positive) of a number
	* @n: input character
	*Return: 1 if n is positive (greater than 0),
	*0 if n is zero
	* and -1 if n is negative (less than zero)
*/

#include "main.h"



int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
