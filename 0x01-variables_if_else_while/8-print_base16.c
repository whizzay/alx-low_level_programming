#include <stdio.h>

/**
 *main - Print the number of base 16 in lowercase
 *
 *Return: Always 0 (success)
 *
 */
int main(void)
{
	char digit;

	for (digit = '0'; digit <= '9'; digit++)
	putchar(digit);

	for (digit = 'a'; digit <= 'f'; digit++)
	putchar(digit);
	putchar('\n');
	return (0);
}
