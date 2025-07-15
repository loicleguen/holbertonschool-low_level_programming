#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_char - prints a char
 * @args: va_list
 * @separator: string separator
 */

void print_char(va_list args, char *separator)
{
	printf("%s%c", separator, va_arg(args, int));
}


/**
 * print_int - prints an integer
 * @args: va_list
 * @separator: string separator
 */

void print_int(va_list args, char *separator)
{
	printf("%s%d", separator, va_arg(args, int));
}


/**
 * print_float - prints a float
 * @args: va_list
 * @separator: string separator
 */

void print_float(va_list args, char *separator)
{
	printf("%s%f", separator, va_arg(args, double));
}


/**
 * print_string - prints a string
 * @args: va_list
 * @separator: string separator
 */

void print_string(va_list args, char *separator)
{
	char *str = va_arg(args, char *);

	if (!str)
		str = "(nil)";
	printf("%s%s", separator, str);
}


/**
 * print_all - prints anything
 * @format: list of types of arguments passed
 */

void print_all(const char * const format, ...)
{
	printer_t funcs[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string}
	};
	unsigned int i = 0, j;
	va_list args;
	char *sep = "";

	va_start(args, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == funcs[j].type)
			{
				funcs[j].print(args, sep);
				sep = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(args);
	printf("\n");
}
