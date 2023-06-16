#include "main.h"

/**
  * main - multiply two integers
  * @argc: argument count
  * @argv: argument vector
  * Return: result of multiplied int
  */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (num1 == '\0' || num2 == '\0')
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	printf("%d\n", mul);
	if (!(isdigit(num1 && num2)))
	{
		printf("Error\n");
		exit(98);
	}

	return (0);
}
