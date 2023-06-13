#include <stdio.h>
#include "main.h"

/**
  * _atoi - converts string to integer
  * @s: string pointer
  * Return: converted string
  */
int _atoi(char *s)
{
	int res = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
		res = res * 10 + s[i] - '0';
	return (res);
}

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
		num = _atoi(argv[1]);
		num1 = _atoi(argv[2]);
		result = num * num1;
		printf("%d\n", result);
	}
}
