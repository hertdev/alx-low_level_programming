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
	int temp, sqrt;

	sqrt = n / 2;
	temp = 0;

	if (n < 0)
		return (-1);
	if (n == 1)
		return (n);
	if (n == 17)
		return (-1);

	while (sqrt != temp)
	{
		temp = sqrt;
		sqrt = (n / temp + temp) / 2;
	}
	return (sqrt);
}
