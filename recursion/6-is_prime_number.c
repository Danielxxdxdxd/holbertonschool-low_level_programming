#include "main.h"

/**
 * _prime - function that print a prime
 * @x: input parameter
 * @y: input parameter
 * Return: Always 0.
 */

int _prime(int x, int y)
{
	if (x % y == 0 && y == x)
		return (1);
	if (x % y == 0 && y != x)
		return (0);
	return (_prime(x, y + 1));
}

/**
 * is_prime_number - function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: input parameter
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (_prime(n, 2));
}
