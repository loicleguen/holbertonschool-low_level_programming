#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: alphabetic variable
 * Return: Always 0 1
 */

int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

