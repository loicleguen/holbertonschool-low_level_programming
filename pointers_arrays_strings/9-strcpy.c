#include "stdio.h"

/**
 * _strcpy - copies the string pointed to by src
 * @dest: char destination
 * @src: char source
 * Return: Always (dest) result
 */

char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; *(src + n) != 0; n++)
	{
		*(dest + n) = *(src + n);
	}
	*(dest + n) = 0;
	return (dest);
}
