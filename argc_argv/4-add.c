#include "stdio.h"
#include "main.h"
#include <stdlib.h>
#include <ctype.h>

/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 1
 */

int main(int argc, char *argv[])
{
	int i1, i2, n, res = 0;

	if (argc > 1)
	{
		for (i1 = 1; i1 < argc; i1++)
		{
			for (i2 = 0; argv[i1][i2] != '\0'; i2++)
			{
				if (!(isdigit(argv[i1][i2])))
				{
					printf("Error\n");
					return (1);
				}
			}
			n = atoi(argv[i1]);
			res = res + n;
		}
		printf("%d\n", res);
		return (0);
	}
	else
	{
		printf("0\n");
		return (0);
	}
}
