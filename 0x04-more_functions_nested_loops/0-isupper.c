#include "main.h"

/**
 * _isupper -  checks for uppercase character.
 * @c: int type number
 * Return: 1 if c is uppercase and 0 otherwise.
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
	{
		return (1);
	}
	else
	{
	return (0);
	}
}
