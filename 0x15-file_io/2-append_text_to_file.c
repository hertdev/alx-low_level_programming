#include "main.h"

/**
  * append_text_to_file - append text to file
  * @filename: name of file to append into
  * @text_content: text content
  * Return: 1 on success, else -1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, err, len;

	op = err = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(op, text_content, len);
	if (err < 0)
		return (-1);
	close(op);
	return (1);
}
