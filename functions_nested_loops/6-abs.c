#include "main.h"

/**
 * @n: numeric variable
 * _abs - computes the absolute value of an integer
 * Return: Always "n"
 */

int _abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
	}
	else if (n > 0)
	{
		n = n;
	}
	else
	{
		n = 0;
	}
	return (n);
}
