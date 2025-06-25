#include "stdio.h"

/**
 * *_strcat - concatenates two strings
 * @dest: char destination
 * @src: char source
 * Return: always dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j] = src[i];
		j++;
	}
	return (dest);
}
