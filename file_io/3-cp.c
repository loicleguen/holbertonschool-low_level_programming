#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

/**
 * print_error_and_exit - Affiche un message d'erreur sur stderr et quitte
 * @exit_code: code de sortie
 * @message: message d'erreur à afficher
 * @arg: nom de fichier ou valeur à afficher
 */

void print_error_and_exit(int exit_code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(exit_code);
}


/**
 * main - copie le contenu d’un fichier dans un autre
 * @ac: nombre d’arguments
 * @av: tableau d’arguments
 *
 * Return: 0 si succès, sinon code d’erreur selon les règles
 */

int main(int ac, char **av)
{
	int fd_from, fd_to, r, w;
	char buffer[BUF_SIZE];

	if (ac != 3)
		print_error_and_exit(97, "Usage: %s file_from file_to\n", av[0]);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", av[1]);
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		print_error_and_exit(99, "Error: Can't write to %s\n", av[2]);
	}
	while ((r = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w != r)
		{
			close(fd_from);
			close(fd_to);
			print_error_and_exit(99, "Error: Can't write to %s\n", av[2]);
		}
	}
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		print_error_and_exit(98, "Error: Can't read from file %s\n", av[1]);
	}
	if (close(fd_from) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", av[1]);
	if (close(fd_to) == -1)
		print_error_and_exit(100, "Error: Can't close fd %d\n", av[2]);
	return (0);
}
