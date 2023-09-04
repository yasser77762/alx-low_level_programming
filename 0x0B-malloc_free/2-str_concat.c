#include "main.h"
/**
 * str_concat -  function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer should point to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2
 * or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	s = malloc(sizeof(char) * ((i + j) + 1));

	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s[j];
		i++;
	}
	return (s);
}
