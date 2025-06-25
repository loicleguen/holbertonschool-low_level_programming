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
		;
	}
	if (n % 2 == 0)
	{
		nsur2 = n / 2;
		for (; n > nsur2; nsur2++)
		{
			_putchar(str[nsur2]);
		}
	}
	else
	{
		nsur2 = (n + 1) / 2;
		_putchar(str[nsur2]);
	}
	_putchar('\n');
}
