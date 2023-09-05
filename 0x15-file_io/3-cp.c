#include "main.h"
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

/**
 * read_textfile - Reads and prints the content of a file.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The actual number of letters read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    int fd;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    fd = open(filename, O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        exit(98);
    }

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
        close(fd);
        exit(98);
    }

    bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
    if (bytes_written == -1)
    {
        close(fd);
        dprintf(STDERR_FILENO, "Error: Can't write to STDOUT\n");
        exit(99);
    }

    close(fd);
    return bytes_written;
}

/**
 * create_and_copy_file - Copies the content of one file to another.
 * @file_from: The source file name.
 * @file_to: The destination file name.
 *
 * Return: 0 on success.
 */
int create_and_copy_file(const char *file_from, const char *file_to)
{
    int fd_from, fd_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        close(fd_from);
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            close(fd_from);
            close(fd_to);
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        close(fd_from);
        close(fd_to);
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        exit(98);
    }

    close(fd_from);
    close(fd_to);
    return (0);
}

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
        exit(97);
    }

    create_and_copy_file(argv[1], argv[2]);

    return (0);
}
