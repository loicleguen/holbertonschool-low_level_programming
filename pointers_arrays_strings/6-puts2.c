#include "main.h"

/**
 * puts2 - prints puts2
 * @str: char
 * Return: Always (0) result
 */

void puts2(char *str)
{
	int n;

	for (n = 0; str[n] != 0; n += 2)
		_putchar(str[n]);
	_putchar('\n');
}
