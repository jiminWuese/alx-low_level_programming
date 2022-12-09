#include <stdio.h>

/**
 * main - This is for this project
 * Return: Always 0
 */

int main()
{
	for (int i = 0; i <= 9; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			for (int k = 0; k <= 9; k++)
			{
				for (int l = 0; l <= 9; l++)
				{
					putchar('0' + i);
					putchar(',');
					putchar(' ');
					putchar('0' + j);
					putchar(',');
					putchar(' ');
					putchar('0' + k);
					putchar(',');
					putchar(' ');
					putchar('0' + l);
					putchar('\n');
				}
			}
		}
	}

	return (0);
}
