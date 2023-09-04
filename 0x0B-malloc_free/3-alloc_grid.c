#include "main.h"
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * Each element of the grid should be initialized to 0
 * @width: int
 * @height: int
 * Return: a pointer to a 2 dimensional array of integers
 * or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width)
			if (arr[i] == NULL)
			{
				for (i = 0; i < width; i++)
				{
					free(arr[i]);
				}
				free(arr);
				return (NULL);
			}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	return (arr);
}
