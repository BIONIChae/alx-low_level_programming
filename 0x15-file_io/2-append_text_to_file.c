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
	FILE *the_file = open(filename, O_WRONLY | O_APPEND);
	size_t count = strlen(text_content);
	size_t w_file = write(test_content, 1, count, the_file);

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		if (w_file != count)
		{
			close(the_file);
			return (-1);
		}
	}

	if (the_file == NULL)
		return (-1);
	close(the_file);

	return (1);
}
