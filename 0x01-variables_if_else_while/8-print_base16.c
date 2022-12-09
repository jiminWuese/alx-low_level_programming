#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i <= 9; i++) {
		putchar(i + '0');
	}

	for (i = 10; i <= 15; i++) {
		putchar(i + 'a' - 10);
	}

	putchar('\n');

	return (0);
}
