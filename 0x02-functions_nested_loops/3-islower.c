#include "main.h"

/**
 * _islower - main that checks for lowercase character.
 * @c: oyut
 * Return: (1) if lower case, (0) if not lower case
 */
int _islower(int c)
{

	if (c > 'a' && c < 'z')
	return (1);
	else
	return (0);
}
