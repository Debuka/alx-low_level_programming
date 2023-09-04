#include "main.h"

/**
 * append_text_to_file - funtion that appends
 * a given text at the end of a file.
 * @filename: Pointer pointing to the file.
 * @text_content: The yext to append.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist - -1 or 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_des, write_sto;
	int i = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i];)
			i++;
	}

	file_des = open(filename, O_WRONLY | O_APPEND);
	write_sto = write(file_des, text_content, i);

	if (file_des == -1 || write_sto == -1)
		return (-1);

	close(file_des);

	return (1);
}
