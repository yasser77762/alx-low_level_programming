#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function that creates an array of integers.
 * @min: int
 * @max: int
 * The array created should contain all the values
 * from min (included) to max (included),
 * ordered from min to max
 * Return: the pointer to the newly created array
 * or If min > max, return NULL
 * or If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int i, j;
	int *range;

	if (min > max)
		return (NULL);
	j = min;
	range =  malloc(sizeof(int) * ((max - min) + 1));
	if (range == NULL)
		return (NULL);
	for (i = 0; i <= (max - min); i++)
	{
		range[i] = j;
		j++;
	}
	return (range);
}
