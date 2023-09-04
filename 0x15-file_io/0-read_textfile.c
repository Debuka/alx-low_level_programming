#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that reads textfile to STDOUT
 * @filename: The file
 * @letters: Number of letters to read.
 * Return: w- Number of bytes read and printed
 *        0 if filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer_pt;
	ssize_t file_des;
	ssize_t to_std;
	ssize_t bytesto;

	file_des = open(filename, O_RDONLY);
	if (file_des == -1)
		return (0);
	buffer_pt = malloc(sizeof(char) * letters);
	bytesto = read(file_des, buffer_pt, letters);
	to_std = write(STDOUT_FILENO, buffer_pt, bytesto);

	free(buffer_pt);
	close(file_des);
	return (to_std);
}
