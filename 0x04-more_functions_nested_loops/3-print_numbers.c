#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line
 * Only use _putchar
 * Description:  use _putchar twice and print values 0-9
 */
void print_numbers(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		_putchar(n + '0');
		n++;
	}
		_putchar('\n');
}
