#include "main.h"
/**
 * _strchr - function that locates a character in a string
 *@s: first value -char
 *@c: second value - char
 * Return: char with result
 */
char *_strchr(char *s, char c)
{
	for ( ; *s; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
