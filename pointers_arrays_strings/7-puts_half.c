#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: char
 * Return: Always (0) result
 */

void puts_half(char *str)
{
	int n, nsur2;

	for (n = 0; str[n] != 0; n++)
	{
	}
	for (nsur2 = (n + 1) / 2; n > nsur2; nsur2++)
	{
		_putchar(str[nsur2]);
	}
	_putchar('\n');
}
