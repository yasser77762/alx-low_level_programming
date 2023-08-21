#include "main.h"

/**
 * puts2 -  prints every other character of a string
 * followed by a new line
 * @str: string to print the char from
 */
void puts2(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	for (j = 0; j < i; j++)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\0');
}
