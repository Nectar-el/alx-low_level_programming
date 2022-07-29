#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: int type number
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
			_putchar('_');
			c++;
	}
	_putchar('\n');
}

