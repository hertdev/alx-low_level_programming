#include "main.h"

/**
  * _pow_recursion - print the value of x raise to power y
  * @x: base number
  * @y: power number
  * Return: result
  */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
