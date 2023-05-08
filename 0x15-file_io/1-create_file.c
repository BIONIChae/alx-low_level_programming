#include "main.h"

/**
 * create_file - Curates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a NULL terminated string.
 *
 * Return: Success = 1, Failure = -1.
 */
int create_file(const char *filename, char *text_content)
{
	int the_file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0644);
	size_t count = strlen(text_content);
	int w_file = write(the_file, text_content, count);

	if (the_file < 0)
		return (-1);
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
	{
		if (w_file == -1)
		{
			close(the_file);
			return (-1);
		}
	}

	close(the_file);
	return (1);
}
