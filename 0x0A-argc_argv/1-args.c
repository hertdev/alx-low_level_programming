#include <stdio.h>

/**
  * main - program entry point
  * @argc: argument count
  * @argv: argument count
  * Return: number of argument passed
  */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
