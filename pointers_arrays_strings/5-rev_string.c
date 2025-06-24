#include "main.h"

/**
 * rev_string - reverse a string
 * @s: char
 * Return: Always (0) result
 */

void rev_string(char *s)
{
	char temp, *reverse = s;

	for (; *reverse; reverse++)
	{
		;
	}
	reverse--;
	for (; s < reverse; s++)
	{
		temp = *reverse;
		*reverse = *s;
		*s = temp;
		reverse--;
	}
}
