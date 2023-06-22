#include "variadic_functions.h"

/**
  * sum_them_all - sum all parameters
  * @n: number of positive arguments to add
  * Return: sum of parameters
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list m;
	unsigned int i, sum = 0;

	va_start(m, n);

	for (i = 0; i < n; i++)
		sum += va_arg(m, int);
	va_end(m);
	return (sum);
}

