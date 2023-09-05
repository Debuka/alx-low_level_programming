#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * main - Function that copies the
 * contents of a file to another file.
 * @argc: The arguements of the program.
 * @argv: An array of pointers.
 *
 * Return: 0 if successful.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int sorc, desti;
	int r_bytes, w_bytes;
	char *buf_;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf_ = create_buffer_funct(argv[2]);
	sorc = open(argv[1], O_RDONLY);
	r_bytes = read(sorc, buf_, 1024);
	desti = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (sorc == -1 || r_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf_);
			exit(98);
		}

		w_bytes = write(desti, buf_, r_bytes);
		if (desti == -1 || w_bytes == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf_);
			exit(99);
		}

		r_bytes = read(sorc, buf_, 1024);
		desti = open(argv[2], O_WRONLY | O_APPEND);

	} while (r_bytes > 0);

	free(buf_);
	close_funct(sorc);
	close_funct(desti);

	return (0);
}

char *create_buffer_funct(char *file);
void close_funct(int fd);

/**
 * create_buffer_funct - function that
 * allocates 1024 bytes for a buffer.
 * @file: File buffer for storing chars.
 *
 * Return: Pointer of the newly-allocated buffer.
 */
char *create_buffer_funct(char *file)
{
	char *buf_;

	buf_ = malloc(sizeof(char) * 1024);

	if (buf_ == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf_);
}

/**
 * close_fucnt - function that closed fd.
 * @fd: The file descriptor.
 */
void close_funct(int fd)
{
	int i;

	i = close(fd);

	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
