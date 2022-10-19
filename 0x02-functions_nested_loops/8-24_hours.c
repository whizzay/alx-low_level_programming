#include "main.h"
#include <stdio.h>

/**
 * jack_bauer - function every minute of the day of jack Bauer,
 * staring from 00:00 to 23:59
 *
 * Return: 0
 */
void jack_bauer(void)
{
	int a, b, c, d;

	for (a = 48; a <= 50; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			for (c = 48; c <= 53; c++)
			{
				for (d = 48; d <= 57; d++)
				{
					if (a >= 50 && b >= 52)
					break;

					putchar(a);
					putchar(b);
					putchar(58);
					putchar(c);
					putchar(d);
					putchar('\n');
				}
			}
		}
	}
}
