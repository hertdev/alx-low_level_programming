#include "main.h"

/**
  * _abs - Prints the absolute value of an integer
  * @int: Integer value to consider
  * Return: absolute value
  */
int _abs(int n)
{
	if (n < 0)
		n = n * (-1);
	_putchar(n);
	return (0);
}
