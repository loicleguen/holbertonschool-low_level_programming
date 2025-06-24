#include "main.h"

/**
 * _puts - prints a string
 * @str: char
 * Return: Always (0) result
 */

void _puts(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n++)
		_putchar(str[n]);
	_putchar('\n');
}
