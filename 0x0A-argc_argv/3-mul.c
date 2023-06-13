#include <stdio.h>
#include "main.h"

/**
  * myAtoi - converts string to integer
  * @s: string pointer
  * Return: converted string
  */
int myAtoi(char *s)
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
int main(int argc, char *argv[] __attribute__((unused)))
{
	int num, num1, result;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num = myAtoi(argv[1]);
		num1 = myAtoi(argv[2]);
		result = num * num1;
		printf("%d\n", result);
	}
}
