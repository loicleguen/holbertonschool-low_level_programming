#include "main.h"

/**
 * print_alphabet - Entry point
 * print_alphabet_x10 - Entry point
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char alphabet;
	int i = 0;

	while (i < 10)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
		i++;
	}
}
