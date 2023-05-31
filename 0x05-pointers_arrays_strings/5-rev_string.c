#include "main.h"

/**
  * rev_string - reverse string
  * @s: string pointer
  * Return: Success (0)
  */
void rev_string(char *s)
{
	int len, i;

	len = 0;

	while (s[len] != '\0')
		len++;
	for (i = 0; i < len; i--)
		_putchar(s[i]);
	_putchar('\n');
}
