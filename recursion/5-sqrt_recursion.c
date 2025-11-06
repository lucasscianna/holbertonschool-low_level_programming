#include "main.h"
/**
 * helper - Recursively finds the natural square root of n
 * @i: Current candidate to test
 * @n: Number to find the square root of
 *
 * Return: The natural square root of n, or -1 if none exists
 */
int helper(int i, int n)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (helper(i + 1, n));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: The natural square root of n, or -1 if n has no natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (helper(0, n));
}