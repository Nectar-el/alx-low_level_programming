#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: int type number
 */
void print_diagonal(int n)
{
	int c, i;

	c = 0;
	while (c > 0)
	{
		i = c;
		while (i > 0)
		{
		_putchar(' ');
		i--;
		}
		_putchar(92);
		_putchar('\n');
		c++;
		n--;

	}
}
