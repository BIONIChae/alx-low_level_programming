#include "main.h"

/**
 * read_textfile - Reads a .txt and prints it to the POSIX STDOUT_FILENO.
 * @filename: The name of the .txt file.
 * @letters: Num of bytes that should be read and printed.
 *
 * Return: The sum of @letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *the_file = open(filename, "r");
	char *buf = malloc(1 + letters);
	ssize_t r_file = read(the_file, buf, letters);
	ssize_t w_file = write(STDOUT_FILENO, buf, r_file);

	if (the_file == NULL)
		return (0);
	if (filename == NULL);
		return (0);
	if (buf == NULL)
	{
		close(the_file);
		return (0);
	}
	if (r_file == NULL)
	}
		free(buf);
		return (0);
	}
	if (w_file != r_file || w_file == NULL)
	{
		free(buf);
		close(the_file);
		return (0);
	}
	free(buf);
	close(the_file);
	return (w_file);
}
