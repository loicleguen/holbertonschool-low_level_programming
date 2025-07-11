#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * is_digit - check if string contains only digits
 * @s: input string
 * Return: 1 if only digits, 0 otherwise
 */
int is_digit(char *s)
{
	while (*s)
	{
		if (!isdigit(*s))
			return (0);
		s++;
	}
	return (1);
}

/**
 * print_error - prints Error and exits
 */
void print_error(void)
{
	char *err = "Error\n";

	while (*err)
		_putchar(*err++);
	exit(98);
}

/**
 * print_result - prints string result using _putchar
 * @res: string to print
 */
void print_result(char *res)
{
	while (*res)
		_putchar(*res++);
}

/**
 * main - multiplies two large numbers using bc
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on error
 */
int main(int argc, char *argv[])
{
	char command[2048];
	char buffer[512];
	FILE *fp;

	if (argc != 3 || !is_digit(argv[1]) || !is_digit(argv[2]))
		print_error();

	snprintf(command, sizeof(command), "echo \"%s * %s\" | bc", argv[1], argv[2]);

	fp = popen(command, "r");
	if (!fp)
		print_error();

	while (fgets(buffer, sizeof(buffer), fp) != NULL)
		print_result(buffer);

	pclose(fp);
	return (0);
}
