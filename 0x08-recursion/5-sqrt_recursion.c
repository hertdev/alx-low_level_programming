#include "main.h"
#include <math.h>
#include <stdio.h>

/**
  * _sqrt_recursion - print natural square root of number
  * @n: natural number
  * Return: square root of n
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (real_sqrt(n, 0));
}

/**
  * real_sqrt - recursion to find natural square
  * @n: int to equate sqrt
  * @i: iterator
  * Return: square root value
  */
int real_sqrt(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (real_sqrt(n, i + 1));
}
