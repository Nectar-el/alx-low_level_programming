#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: int type number
 */
void print_line(int n)
{
	n = '_';

	for (n = 0; n <= 20; n++)
	{
		if (n > 0)
		{
			_putchar(n + '0');
			_putchar('\n');
		}
		else if (n <= 0)
		{
			_putchar('\n');
		}
	}
}

