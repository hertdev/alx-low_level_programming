#include "main.h"

/**
  * _puts_recursion - prints a string 
  * @s: character to print
  * Return: string followed by a new line
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_putchar(*s + 1);
}
