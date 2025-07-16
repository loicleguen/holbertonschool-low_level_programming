#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of its own function
 * @argc: Number of arguments
 * @argv: Argument vector
 * Return: 0 on success, 1 or 2 on error
 */
int main(int argc, char *argv[])
{
	int i, n_bytes;
	unsigned char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	ptr = (unsigned char *)main;
	for (i = 0; i < n_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i != n_bytes - 1)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
