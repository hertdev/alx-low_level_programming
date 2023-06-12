#include <stdio.h>
#include <stdlib.h>

/**
  * main - program entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: multiplied number
  */
int main(int argc, char *argv[])
{
	int num, num1, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = atoi(argv[1]);
		num1 = atoi(argv[2]);
		result = num * num1;
		printf("%d\n", result);
	}
}
