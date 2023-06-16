#include "main.h"

/**
  * main - program entry point
  * Return: result of multiplied int
  */
int main(int argc, char *argv[])
{
	int mul, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;

	if (!(num1 && num2))
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", mul);
	return (0);
}
