#include <stdlib.h>

#include <time.h>

#include <stdio.h>


/**
 * main - prints all single digit numbers of base 10 starting from 0.
 * followed by a new line.
 * Return: 0 as success and non zero if not.
 **/
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
{
	putchar(ch);
}
	putchar(10);

	return (0);
}
