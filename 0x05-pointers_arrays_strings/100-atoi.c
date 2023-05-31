#include "main.h"
#include <stdlib.h>

/**
  * _atoi - convert a string to an integer
  * @s: pointer to char
  * Return: Integer
  */
int _atoi(char *s)
{
	int num = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		num = num * 10 + (s[i] - 48);
		_putchar(num);
	}
	_putchar('\n');
	return (0);
}
