#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checker - function that allocates memory using malloc
 * @b: int and this is length to allocated in the memory
 * Return: if malloc fails
 * the malloc_checked function
 * should cause normal process termination
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}

