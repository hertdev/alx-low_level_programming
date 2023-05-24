#include "main.h"

/**
  * print_sign - program that print sign of a number
  * @n: function parameter integer
  * Return: signs
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
		_putchar('error');
}
