#include "main.h"

/**
 * sqrt_find - helper function to find the square root
 * @n: the number to find the square root of
 * @i: the current guess for the square root
 * Return: the natural square root of n, or -1
 */
int sqrt_find(int n, int i)
{
	if (i * i > n)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	return (sqrt_find(n, i + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number to find the square root of
 * Return: the natural square root of n, or -1
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_find(n, 0));
}
