#include "stdio.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int
 * @n: int
 * Return: Always (0) result
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < (n / 2); i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
