#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 1024

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
    char *buffer;

    buffer = malloc(BUFFER_SIZE);
    if (buffer == NULL)
    {
        dprintf(STDERR_FILENO, "Error: Can't allocate buffer\n");
        exit(99);
    }

    fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        free(buffer);
        exit(98);
    }

    fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
        free(buffer);
        close(fd_from);
        exit(99);
    }

    while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(fd_to, buffer, bytes_read);
        if (bytes_written == -1)
        {
            dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
            free(buffer);
            close(fd_from);
            close(fd_to);
            exit(99);
        }
    }

    if (bytes_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
        free(buffer);
        close(fd_from);
        close(fd_to);
        exit(98);
    }

    free(buffer);
    close(fd_from);
    close(fd_to);
    return (0);
}
