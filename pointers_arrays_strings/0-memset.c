#include "main.h"

/**
 * _memset - fills memeory with a constant byte
 * @s: char pointer
 * @b: char
 * @n: int
 * Return: always s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}
