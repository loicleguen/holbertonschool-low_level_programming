#include "main.h"

/**
 * _islower - checks for lowercase character
 * c - variable alphabetique
 * Return: Always 0 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
