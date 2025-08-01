#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: numeric variable
 * _putchar - print charactr
 * Return: Always 0 1 "-1" "+" "-"
 */

int print_sign(int n)
{
	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
