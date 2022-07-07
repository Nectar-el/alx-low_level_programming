#include <stdlib.h>

#include <time.h>

#include <stdio.h>
/**
 * main -  prints all possible different combinations of two digits
 * return: Always 0 (success)
 */

int main(void)
{
	int ch;
	int n;

	for (ch = 47; ch <= 56; ch++)
{
	for (n = 48; n <= 56; n++)
{
	if (n > ch)
{
	putchar(ch);
	putchar(n);
	if (ch != 55 || n != 56)
{
	putchar(44);
	putchar(32);
}
}
}
}
	putchar(10);

	return (0);
}
