#include "main.h"

/**
  * print_line - prints line to the screen
  * @n: integer to consider
  * Return: line on screen
  */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		int i;

		for (i = 0; i <= n; i++)
			_putchar('_');
		_putchar('\n');
	}
}
