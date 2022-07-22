#include "main.h"

/**
 * print_alphabet_x10 - main  that prints 10 times the alphabet,
 *  in lowercase, followed by a new line
 *  Return: Always (0).
 */
void print_alphabet_x10(void)
{
	int c = 0;
	char i;

	while (c < 10)
	{
	i = 'a';
	while (i <= 'z')
	{
	_putchar(i);
	i++;
	}
	_putchar('\n');
	c++;
	}
}
