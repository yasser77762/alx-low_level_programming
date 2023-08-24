#include "main.h"
/**
 * reverse_array - reverses the content of an array of integers
 * @a: pointer
 * @n: array length
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int debut, fin, temp;

	debut = 0;
	fin = n - 1;

	while (debut < fin)
	{
		temp = a[debut];
		a[debut] = a[fin];
		a[fin] = temp;
		debut++;
		fin++;
	}
}


