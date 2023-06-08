#include "main.h"

/**
  * factorial - print the factorial of given number
  * @n: integer to consider
  * Return: factorial of number
  */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
