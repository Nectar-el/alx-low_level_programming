#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line.
 */
void more_numbers(void)
{
	int n;
	int i;

	 for (n = 1; n <= 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			if (i > 14)
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

