#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations of single-digit numbers.
 * Ruturn: Always 0
 */

int main(void)
{
	int i, j, k, l;

	for (i = 0; i <= 9; i++) {
		for (j = 0; j <= 9; j++) {
			for (k = 0; k <= 9; k++) {
				for (l = 0; l <= 9; l++) {
					putchar(i + '0');
					putchar(j + '0');
					putchar(k + '0');
					putchar(l + '0');
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
