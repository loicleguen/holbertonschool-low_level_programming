#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers from min to max
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to the newly created array, or NULL on failure
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}
