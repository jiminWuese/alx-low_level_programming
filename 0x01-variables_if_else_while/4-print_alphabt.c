#include <stdio.h>

/**
 * main - prints and exclude q and e
 * Return: Always 0
 */
int main(void)
{
	char c;
	for (c = 'a'; c <= 'z'; c++)
       	{
		 if (c == 'q' || c == 'e')
		 {
			 continue;
		 }
		 putchar(c);
	}

	putchar('\n');

	return (0);

}
