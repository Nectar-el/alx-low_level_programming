#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * followed by a new line.
 * retun 0 as success and non zero if not.
 **/
int main(void)
{
	int ch;

	for (ch = 56; ch <= 65; ch++)
{
	putchar(ch);
}
	putchar(10);

	return (0);
}
