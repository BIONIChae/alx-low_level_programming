#include "main.h"

/**
 * append_text_to_file - Appends text.
 * @filename: Name of the file.
 * @text_content: The NULL string added to the end of the file.
 *
 * Return: Success = 1, Failure = -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int the_file = open(filename, O_WRONLY | O_APPEND);
	size_t count = strlen(text_content);
	size_t w_file = write(the_file, text_content, count);

	if (filename == NULL)
		return (-1);
	if (the_file < 0)
		return (-1);

	if (text_content != NULL)
	{
		if (w_file != count)
			return (-1);
	}
	close(the_file);

	return (1);
}
