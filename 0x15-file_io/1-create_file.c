#include "main.h"

/**
 * create_file - Curates a file.
 * @filename: Name of the file.
 * @text_content: A NULL string to write the file.
 *
 * Return: On success 1, else -1.
 */
int create_file(const char *filename, char *text_content)
{
	int length = 0;
	int file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	int w_file = write(file, text_content, length);

	if (filename == NULL)
		return (-1);

	if (file == -1)
		return (-1);

	if (w_file == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	close(file);
	return (1);
}
