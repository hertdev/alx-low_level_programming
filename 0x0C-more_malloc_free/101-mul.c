#include "main.h"

/**
 * main - multiply two positive integers
 * num1: first positive integer
 * num2: second positive integer
 * mul: multiply the two integers
 *
 * Return: Multiplication of two numbers
 */
int main(void)
{
	int num1, num2, mul;

	num1 = 10;
	num2 = 98;

	mul = num1 * num2;

	printf("%d\n", mul);

	if (num1 == '\0' || num2 == '\0')
	{
		printf("Error\n");
		exit(98);
	}
	if (isdigit(num1 && num2))
		printf("%d\n", mul);
	else
	{
		printf("Error\n");
		exit(98);
	}

	return (mul);
}
