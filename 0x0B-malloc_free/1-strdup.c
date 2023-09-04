#include "main.h"
/**
 * _strdup -  returns a pointer to a newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return:  pointer to a new string
 * or NULL if insufficient memory was available
 */

char *_strdup(char *str)
{
	char *s;
	int i, j = 0;

	if (str == NULL)
		return (NULL);

	while (str[j] != '\0')
	{
		j++;
	}

	s = malloc(sizeof(char) * (j + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < j ; i++)
	s[i] = str[i];

	s[j] = '\0';

	return (s);

	}
