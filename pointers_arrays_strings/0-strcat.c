#include "stdio.h"

/**
 * *_strcat - concatenates two strings
 * @dest: char destination
 * @src: char source
 * Return: always dest
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a + b] = src[b];
	}
	return (dest);
}
