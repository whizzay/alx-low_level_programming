#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table starting with 0
 *
 * Return: no return
 */

void times_table(void)
{
	int a, b, c;

	for (a = 0; a <= 9; a++)
	{
		putchar(48);

		for (b = 1; b <= 9; b++)
		{
			c = a * b;

			putchar(44);
			putchar(32);

			if (c <= 9)
			{
				putchar(32);
				putchar(c + 48);
			}
			else
			{
				putchar((c / 10) + 48);
				putchar((c % 10) + 48);
			}
		}
		putchar('\n');
	}
}
