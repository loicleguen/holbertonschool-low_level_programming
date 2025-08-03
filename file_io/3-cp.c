#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints an error message and exits with a given code.
 * @code: The exit code.
 * @message: The error message format.
 * @arg: The argument to format the message with.
 */

void print_error(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}


/**
 * close_file - Closes a file descriptor and handles errors.
 * @fd: The file descriptor to close.
 */

void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}


/**
 * create_buffer - Allocates a buffer of BUFFER_SIZE bytes.
 * @file: The name of the file to write to.
 * Return: A pointer to the allocated buffer.
 */

char *create_buffer(const char *file)
{
	char *buffer = malloc(BUFFER_SIZE);

	if (buffer == NULL)
		print_error(99, "Error: Can't write to %s\n", file);
	return (buffer);
}


/**
 * copy_file - Copies the content of one file to another.
 * @file_from: The source file to copy from.
 * @file_to: The destination file to copy to.
 */

void copy_file(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	ssize_t r, w;
	char *buffer = create_buffer(file_to);

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		print_error(98, "Error: Can't read from file %s\n", file_from);
	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		free(buffer);
		close_file(fd_from);
		print_error(99, "Error: Can't write to %s\n", file_to);
	}
	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
		{
			free(buffer);
			close_file(fd_from);
			close_file(fd_to);
			print_error(99, "Error: Can't write to %s\n", file_to);
		}
	}
	if (r == -1)
	{
		free(buffer);
		close_file(fd_from);
		close_file(fd_to);
		print_error(98, "Error: Can't read from file %s\n", file_from);
	}
	free(buffer);
	close_file(fd_from);
	close_file(fd_to);
}


/**
 * main - Entry point of the program.
 * @argc: The number of command line arguments.
 * @argv: The command line arguments.
 * Return: 0 on success, or exits with an error code.
 */

int main(int argc, char **argv)
{
	if (argc != 3)
		print_error(97, "Usage: cp file_from file_to\n", "");

	copy_file(argv[1], argv[2]);
	return (0);
}
