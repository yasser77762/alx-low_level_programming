#include "main.h"
/**
 * sqrt - my fonction about the square root
 * @a: int
 * @b: int
 * Returne: 1 succes , -1 error
 */
int sqrt(int a, int b)
{
	if (a == (b * b))
		return (b);
	else if ((b * b) >= a)
		return (-1);
	else
		return (sqrt(a, b + 1));
}

/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: int
 * Return: 1 success , -1 error
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}
