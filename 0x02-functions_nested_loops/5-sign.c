#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: s
 * Description: print +, 0, or - depending on number, along with return
 * Return: 1 if +, 0 if 0, and -1 if -
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
