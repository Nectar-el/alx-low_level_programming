#include "main.h"

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: int type number
 */
void print_diagonal(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar(92);
	}
	_putchar('\n');
}
