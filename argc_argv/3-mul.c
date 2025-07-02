#include "stdio.h"
#include "main.h"
#include <stdlib.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 1
 */

int main(int argc, char *argv[])
{
	int i, n, res = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			n = atoi(argv[i]);
			res = res * n;
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
