#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints the alphabets in lower case
 */

void print_alphabet(void)
{
	int letters;

	for (letters = 'a'; letters <= 'z'; letters++)
	{
		putchar(letters);
	}
	putchar('\n');
}
