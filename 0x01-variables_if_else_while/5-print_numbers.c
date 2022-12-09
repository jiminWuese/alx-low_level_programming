#include <stdio.h>

/**
 * main - prints alpha in lower and upper case 
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++) {
		putchar(i + '0');
	}

	putchar('\n');

	return 0;

}
