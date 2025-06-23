#include "main.h"

/**
 * _isdigit - checks for uppercase character
 * @c: int
 * Return: Always 0 (Success)
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
