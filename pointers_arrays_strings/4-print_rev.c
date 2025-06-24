#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: char
 * Return: Always (0) result
 */

void print_rev(char *s)
{
	int n;

	for (n = 0; s[n] != 0; n++)
	{
		;
	}
	for (n = n - 1; s[n] != 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
