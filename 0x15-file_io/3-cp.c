#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *fur_buff(char *file);
void fur_closing(int file_des);

/**
 * fur_buff - function that
 * allocates 1024 bytes for a buffer.
 * @file: Name of the file for buffer.
 *
 * Return: A pointer to buffer.
 */
char *fur_buff(char *file)
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
 * fur_closing - Function that closes file descriptor
 * @file_des: The file descriptor to be closed.
 */
void fur_closing(int file_des)
{
	int q;

	q = close(file_des);

	if (q == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_des);
		exit(100);
	}
}

/**
 * main - Funtion that copies content of a file into another.
 * @argc: Number of args.
 * @argv: An array of pointers to args.
 *
 * Return: 0 on success.
 *
 * Description: Incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int r_from, r_to;
	int rd, writ;
	char *buf_;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf_ = create_buffer(argv[2]);
	r_from = open(argv[1], O_RDONLY);
	rd = read(from, buf_, 1024);
	r_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (r_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf_);
			exit(98);
		}

		writ = write(r_to, buf_, rd);
		if (to == -1 || writ == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf_);
			exit(99);
		}

		rd = read(r_from, buf_, 1024);
		r_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf_);
	close_file(r_from);
	close_file(r_to);

	return (0);
}
