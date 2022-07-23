#include "main.h"
/**
 * print_sign: prints the sign of a number
 * @n: s
 * Return: Returns 1 and prints + if n is greater than zero or
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n)
{

		if (n > 0)
		{
			_putchar(43);
			n++;
			return (1);
		}
		else if (n < 0)
		{
			_putchar(45);
			return (-1);
		}
		else
		{
			_putchar(48);
			return (0);
		}
}
