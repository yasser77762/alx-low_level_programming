#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	for ( ; *s; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
	}
	return ('\0')
}
