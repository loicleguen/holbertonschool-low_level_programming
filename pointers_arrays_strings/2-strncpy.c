#include "main.h"

/**
 * _strncpy - copying two strings
 * @dest : pointer
 * @src : source pointer
 * @n : integer variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; i < n && src[i] != '\0'; i++)
	{
		;
	}
	for (; j < i && src[j] != '\0'; j++)
	{
		dest[j] = src[j];
	}
	for (; j < n; j++)
	{
		dest[j] = '\0';
	}
	return (dest);
}
