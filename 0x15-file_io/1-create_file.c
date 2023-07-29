#include "main.h"

/**
  * create_file - creates file
  * @filename: name of file
  * @text_content: Null terminated string to read to file
  * Return: 1 on success, else -1
  */
int create_file(const char *filename, char *text_content)
{
	int op, err, len;

	op = err = len = 0;
	if (!filename)
		return (-1);
	op = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (op < 0)
		return (-1);
	if (text_content && text_content[len])
		len++;
	err = write(op, text_content, len);
	if (err < 0)
		return (-1);

	close(op);
	return (1);
}
