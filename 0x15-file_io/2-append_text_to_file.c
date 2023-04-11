#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: The name of the file.
 * @text_content: String to append to the end of file.
 *
 * Return: On success 1, else -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t len = strlen(text_content);
	int file = open(filename, O_WRONLY | O_APPEND);
	ssize_t w_file = write(file, text_content, len);

	if (filename == NULL)
		return (-1);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		if (w_file == len)
			return (1);
	}

	close(file);
	return (-1);
}
