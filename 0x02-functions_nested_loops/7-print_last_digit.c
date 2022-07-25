#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: variable
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	if (n >= 0)
	{
		m = n % 10;
		_putchar(m + '0');
		return (m);
	}
	else
	{
		m = -1 * n % 10;
		_putchar(m + '0');
		return (m);
	}
}
