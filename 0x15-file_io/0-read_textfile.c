#include "main.h"

/**
 * read_textfile - Reads a text file &
 *		prints it to the POSIX standard output.
 * @filename: The name of the file to be read and printed.
 * @letters: Num of letters to be read and printed.
 *
 * Return: The number of letters.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff = malloc(letters * sizeof(char));
	int file = open(filename, O_RDONLY);
	ssize_t r_file, w_file;

	r_file = read(file, buff, letters);
	w_file = write(STDOUT_FILENO, buff, r_file);

	if (filename == NULL)
		return (0);

	if (file == -1)
		return (0);

	if (buff == NULL)
	{
		close(file);
		return (0);
	}

	if (r_file == -1)
		return (0);

	if (w_file != r_file)
		return (0);

	return (w_file);
	free(buff);
	close(file);
}
