#include "main.h"

/**
  * _abs - Prints the absolute value of an integer
  * @n: Integer value to consider
  * Return: absolute value
  */
int _abs(int n)
{
	if (n < 48)
		n = n * (-48);
	_putchar(n);
	return (0);
}
