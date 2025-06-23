#include "main.h"

/**
 * more_numbers - prints the numbers, from 0 to 9 10 times
 */

void more_numbers(void)
{
	int num10, num;

	for (num10 = 0; num10 < 10; num10++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
			{
				_putchar((num / 10) + '0');
			}
		_putchar((num % 10) + '0');
		}
	_putchar(10);
	}
}
