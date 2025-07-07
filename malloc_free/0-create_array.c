#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it
 * @size: size of the array
 * @c: char to initialize the array
 * Return: pointer to the array, or NULL if size is 0
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (0);
	}
	array = malloc(size * sizeof(char));
	if (array == 0)
	{
		return (0);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
	return (array);
	free(array);
}
