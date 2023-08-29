#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 * @s: first value
 * @accept: second value
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int a = 0;

	for (i = 0; s[i] != ' ' && s[i] != '\0'; j++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				a++;
		}
	}
	return (a);
}
