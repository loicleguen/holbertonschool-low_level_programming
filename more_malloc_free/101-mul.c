#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int is_digit(char *s);
int _strlen(char *s);
void print_error(void);
void multiply(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
	{
		print_error();
	}
	multiply(argv[1], argv[2]);
	return (0);
}

/**
 * is_digit - checks if a string contains only digits
 * @s: string to check
 * Return: 1 if true, 0 otherwise
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * print_error - prints "Error" and exits with status 98
 */
void print_error(void)
{
	char *err = "Error\n";
	int i = 0;

	while (err[i])
	{
		_putchar(err[i]);
		i++;
	}
	exit(98);
}

/**
 * multiply - performs the multiplication and prints the result
 * @num1: first number as string
 * @num2: second number as string
 */
void multiply(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result;
	int i, j, mul, carry, n1, n2, start = 0;

	result = malloc(sizeof(int) * (len1 + len2));
	if (!result)
		exit(98);

	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 - 1; i >= 0; i--)
	{
		n1 = num1[i] - '0';
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			mul = n1 * n2 + result[i + j + 1] + carry;
			result[i + j + 1] = mul % 10;
			carry = mul / 10;
		}
		result[i + j + 1] += carry;
	}

	while (start < len1 + len2 && result[start] == 0)
		start++;

	if (start == len1 + len2)
		_putchar('0');
	else
	{
		for (i = start; i < len1 + len2; i++)
			_putchar(result[i] + '0');
	}
	_putchar('\n');
	free(result);
}
