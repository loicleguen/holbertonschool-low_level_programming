#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: int
 */


void print_triangle(int size)
{
	int h, i, j;

	if (size > 0)
	{
		for (h = 0; h < size; h++)
		{
			for (i = size - 1; i > h; i--)
			{
				_putchar(' ');
			}
			for (j = -1; j > h; j++)
			{
				_putchar('#');
			}
		}
	}
}
