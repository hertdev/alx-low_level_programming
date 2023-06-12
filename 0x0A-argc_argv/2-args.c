#include <stdio.h>

/**
  * main - program entry point
  * @argc: argument count
  * @argv: argument vector
  * Return: prints all arguments received in new line
  */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
