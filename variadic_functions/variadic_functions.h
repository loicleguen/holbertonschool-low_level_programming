#ifndef variadic_functions_H
#define variadic_functions_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

typedef struct printer
{
	char type;
	void (*print)(va_list args, char *separator);
} printer_t;

#endif /* variadic_functions_H */
