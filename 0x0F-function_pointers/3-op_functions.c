#include "3-calc.h"

/**
  * op_add - sum integers
  * @a: first int
  * @b: second int
  *
  * Return: sum integers
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - sum integers
  * @a: first int
  * @b: second int
  *
  * Return: sub integers
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - sum integers
  * @a: first int
  * @b: second int
  *
  * Return: multiplied integers
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - sum integers
  * @a: first int
  * @b: second int
  *
  * Return: division of integers
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
  * op_mod - sum integers
  * @a: first int
  * @b: second int
  *
  * Return: modulus integers
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
