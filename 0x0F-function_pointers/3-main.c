#include "3-calc.h"

/**
  * main - program entry
  * @argc: argument counts
  * @argv: argument vector
  *
  * Return: Always success 0
  */
int main(int argc, char *argv[])
{
	int calc, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
			&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2][1] == '\0')
	{
		calc = (*get_op_func(argv[2]))(num1, num2);
		printf("%d\n", calc);
	}

	else
	{
		printf("Error\n");
		exit(99);
	}

	return (0);
}


