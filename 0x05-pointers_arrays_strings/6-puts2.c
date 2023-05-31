#include "main.h"

/**
  * puts2 - prints every other char of a string
  * @str: string pointer
  * Return: Success
  */
void puts2(char *str)
{
	int length, i;
	length = 0;

	while (str[length] != '\0')
		length++;
	for (i = 0; i < length; i = i + 2)
		_putchar(str[i]);
	_putchar('\n');
}
