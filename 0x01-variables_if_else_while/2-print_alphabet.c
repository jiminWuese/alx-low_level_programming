#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints alpha in lower case
 * Return: Always 0
 */

int main(void)
{

	char c;
	for (c = 'a'; c <= 'z'; c++)
       	{
		putchar(c);
	}
	for (c = 'A'; c <= 'Z'; c++)
       	{
		putchar(c);
	}

	return(0);
}
