#include "main.h"

/**
  * _prime_number - return 1 if prime else 0
  * @n: integer value
  * Return: 1 else 0
  */
int is_prime_number(int n)
{
	if (n < 1)
		return (0);
	return (real_prime(n, n - 1));
}

/**
  * real_prime - recurse if the number is prime
  * @n: integer to evaluate
  * @i: iterator
  * Return: 1 if number is prime else 0
  */
int real_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (real_prime(n, n - 1));
}
