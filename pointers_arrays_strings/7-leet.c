#include "stdio.h"

/**
 * leet - encodes a string into 1337
 * @str: char
 * Return: Always (r) result
 */

char *leet(char *str)
{
	int i = 0;
	char *r = str;
	char a[] = {'a', 'e', 'o', 't', 'l'};
	char n[] = {4, 3, 0, 7, 1};

	for (; str[i]; str++)
	{
		for (i = 0; i < 5; i++)
		{
			if (*str == a[i] || *str == a[i] - 32)
			{
				*str = n[i] + '0';
			}
		}
	}
	return (r);
}
