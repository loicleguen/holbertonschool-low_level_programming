#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

void print_error_and_exit(int code, const char *msg, const char *file);
void close_file(int fd);

/**
 * print_error_and_exit - Print error message and exit
 * @code: exit code
 * @msg: message format
 * @file: filename or NULL
 */

void print_error_and_exit(int code, const char *msg, const char *file)
{
	dprintf(STDERR_FILENO, msg, file);
	exit(code);
}


/**
 * close_file - Close file descriptor and handle errors
 * @fd: file descriptor
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
 * main - Copies the content of one file to another
 * @ac: argument count
 * @av: argument vector
 * Return: 0 on success, exit codes on error
 */

int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t r, w, total_written;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", av[1]);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_file(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", av[2]);
	}
	while ((r = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		total_written = 0;
		while (total_written < r)
		{
			w = write(fd_to, buffer + total_written, r - total_written);
			if (w == -1)
			{
				close_file(fd_from);
				close_file(fd_to);
				print_error_and_exit(99, "Error: Can't write to %s\n", av[2]);
			}
			total_written += w;
		}
	}
	if (r == -1)
	{
		close_file(fd_from);
		close_file(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", av[1]);
	}
	close_file(fd_from);
	close_file(fd_to);
	return (0);
}
