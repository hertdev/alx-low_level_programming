#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  * main - program entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: addition of two positive number
  */
int main(int argc, char *argv[])
{
	int sum, num, i, j, k;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (k = 0; k < argc; k++)
	{
		num = atoi(argv[k]);
		if (num >= 0)
			sum = sum + num;
	}

	printf("%d\n", sum);

	return (0);
}
