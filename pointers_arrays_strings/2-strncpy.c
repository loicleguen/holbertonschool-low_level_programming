#include "stdio.h"

/**
 * _strncpy - copies the string
 * @dest: char destination
 * @src: char source
 * @n: int
 * Return: Always (dest) result
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = src[i];
	return (dest);
}
