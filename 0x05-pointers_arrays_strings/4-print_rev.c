#include "main.h"

/**
 * print_rev -  prints a string, in reverse
 * followed by a new line.
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, j, k;

	for (i = 0; s[i] != '\0'; i++)
	{
		k = i;
	}

	for (j = k - 1; j >= 0; j--)
	{
		_putchar(s[j]);
	}

	-putchar('\n');
}
