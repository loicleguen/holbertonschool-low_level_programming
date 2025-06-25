#include "main.h"

/**
 * reverse_array - reversing an array
 * @a: an array of integers
 * @n: the number of elements to swap
 * Return: nothing.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j, tmp;

	for (j = n - 1; j > i; j--)
	{
		tmp = a[j];
		a[j] = a[i];
		a[i] = tmp;
		i++;
	}
}
