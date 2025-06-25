#include "stdio.h"

/**
 * print_array - prints n elements of an array
 * @a: int
 * @n: int
 * Return: Always (0) result
 */

void print_array(int *a, int n)
{
	int num;

	for (num = 0; num < n; num++)
	{
		if (num != n - 1)
		{
			printf("%d, ", a[num]);
		}
		else
		{
			printf("%d", a[num]);
		}
	}
	printf("\n");
}
