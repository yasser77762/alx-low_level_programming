#include "main.h"
/**
 * is_prime_number - its a prime number
 * @n: int
 * Return: 1 prime number
 * or o if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else if (n == 2)
		return (1);
	else if ((n % 2 == 0) || (n % 3 == 0) || (n % 5 == 0))
		return (0);
	else if (n % 9 == 0 || n % 7 == 0)
		return (0);
	else
		return (1);
}
