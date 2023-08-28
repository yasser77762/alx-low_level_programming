#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: target
 * @b: constant byte
 * @n: number of byte
 * Return: return new value of target
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
