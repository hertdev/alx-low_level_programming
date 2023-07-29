#include "main.h"

/**
  * read_textfile - read text file and print it to standard output
  * @filename: name of file
  * @letters: number of letters to read and print
  * Return: text to stdout
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (!filename)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);
	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || rd != wr)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(op);

	return (wr);
}
