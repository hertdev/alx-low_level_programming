#include "main.h"

/**
  * print_last_digit - computes the last digit of a number
  * @n: integer to consider
  * Return: the last digit of a number
  */
int print_last_digit(int n)
{
	int print_num;

	if (n < 0)
		n = -n;
	print_num = n % 10;

	if (print_num < 0)
		print_num = -print_num;
	_putchar(print_num + '0');
	return (print_num);
}
