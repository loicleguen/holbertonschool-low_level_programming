#include "main.h"

/**
 * print_square - draws a square
 * @size: int
 */


void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		size--;
	}
	else
		_putchar('\n');
}
