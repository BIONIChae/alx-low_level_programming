#include "main.h"

/**
 * main - Prints the data contained in the ELF header.
 * @count: The argument counter.
 * @vector: Pointer to the array of strings containing the arguments.
 *
 * Return: 0
 */
int main(int count, char  *vector[])
{
	int input = open(vector[1], O_RDONLY);
	int output = open(vector[2], O_WRONLY | O_CREAT | O_TRUNC, 0640);
	char buf[1018];
	ssize_t r_file = read(input, buf, 1018), w_file;

	if (count != 3)
		dprintf(STDERR_FILENO, "1: Incorrect number of arguments in %s\n", vector[0]);
	if (input < 0)
	{
		dprintf(STDERR_FILENO, "%s file failed\n", vector[1]);
		exit(98);
	}
	if (output < 0)
		dprintf(STDERR_FILENO, "1: error writing to %s\n", vector[2]);

	while (r_file > 0)
	{
		w_file = write(output, buf, r_file);
		if (w_file < 0)
		{
			dprintf(STDERR_FILENO, "1: error writing to %s\n", vector[2]);
			break;
		}
		r_file = read(input, buf, 1018);
		if (r_file < 0)
		{
			dprintf(STDERR_FILENO, "1: error reading %s\n", vector[1]);
			exit(98);
		}
	}
	close(r_file);
	close(w_file);
	close(input);
	close(output);

	return (0);
}
