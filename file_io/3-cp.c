#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with the given code.
 * @exit_code: The exit code.
 * @message: The format string for the message.
 * @arg: The argument to insert into the message.
 */

void print_error(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}


/**
 * _strcmp - compares two strings
 * @s2: char
 * @s1: char
 * Return: Always (0,-1,1) result
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0')
	{
		s1++, s2++;
	}
	return (*s1 - *s2);
}


/**
 * main - Copies the content of one file to another.
 * @ac: Argument count.
 * @av: Argument vector.
 * Return: 0 on success, exits with codes 97-100 on failure.
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t read_bytes, written_bytes;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");
	if (_strcmp(av[1], av[2]) == 0)
		return (0);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error(99, "Error: Can't write to %s\n", av[2]);
	}
	while ((read_bytes = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		written_bytes = write(fd_to, buffer, read_bytes);
		if (written_bytes != read_bytes)
		{
			close(fd_from);
			close(fd_to);
			print_error(99, "Error: Can't write to %s\n", av[2]);
		}
	}
	if (read_bytes == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error(98, "Error: Can't read from file %s\n", av[1]);
	}
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
