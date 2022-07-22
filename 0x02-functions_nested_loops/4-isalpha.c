#include "main.h"
/**
 * _isalpha - function that checks for alphabetic character
 * @c: - th
 * Return: (1) if c is a letter and 0 if c isn't
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		return (1);
	else
		return (0);
}
