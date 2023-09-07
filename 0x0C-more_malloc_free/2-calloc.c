#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: length to allocate
 * @size: size of casting
 * The memory is set to zero
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * or If malloc fails, then _calloc returns NULL
 * or returns a pointer to the allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *call;

	if (nmemb == 0 || size == 0)
		return (NULL);

	i = (nmemb * size);

	call = malloc(i);
	if (call == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
	{
		call[j] = 0;
	}
	return (call);
}
