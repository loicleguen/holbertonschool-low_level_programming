#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charType;
	int intType;
	long longintType;
	long long longlongintType;
	float floatType;

printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long int: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
printf("Size of float: %zu bytes\n", sizeof(floatType));
		return (0);
}
