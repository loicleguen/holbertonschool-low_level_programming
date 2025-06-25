#include "main.h"

/**
 * _strncat - function to concatenate strings
 * @dest : pointer
 * @src : pointer
 * @n : variable integer
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i + j] = src[j];
	}
	return (dest);
}
