#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: int
 * Return: Always 0 (Success)
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
