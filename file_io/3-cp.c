#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
* error_exit - Prints an error message and exits the program.
* @msg: The error message format string.
* @exit_code: The exit status code.
* @file_name: The name of the file (can be NULL).
*/
void error_exit(const char *msg, int exit_code, const char *file_name)
{
	dprintf(STDERR_FILENO, msg, file_name);
	exit(exit_code);
}

/**
* main - Copies the content of one file to another.
* @argc: The number of command-line arguments.
* @argv: The command-line arguments array.
*
* Return: 0 on success, or one of the following error codes:
*         97 if the number of arguments is incorrect,
*         98 if the source file can't be read,
*         99 if the destination file can't be written to,
*         100 if a file descriptor can't be closed.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to, n_read, n_written;

	char buffer[BUFFER_SIZE];

	if (argc != 3)
		error_exit("Usage: cp file_from file_to\n", 97, NULL);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit("Error: Can't write to file %s\n", 99, argv[2]);

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		n_written = write(fd_to, buffer, n_read);
		if (n_written != n_read)
			error_exit("Error: Can't write to file %s\n", 99, argv[2]);
	}

	if (n_read == -1)
		error_exit("Error: Can't read from file %s\n", 98, argv[1]);

	if (close(fd_from) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[1]);

	if (close(fd_to) == -1)
		error_exit("Error: Can't close fd %d\n", 100, argv[2]);

	return (0);
}

