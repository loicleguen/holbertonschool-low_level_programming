#include "stdio.h"

/**
 * _strcmp - compares two strings
 * @s2: char
 * @s1: char
 * Return: Always (0,-1,1) result
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	else if (*s1 < *s2)
	{
		return (*s1 - *s2);
	}
	else
	{
		return (*s1 - *s2);
	}
}
