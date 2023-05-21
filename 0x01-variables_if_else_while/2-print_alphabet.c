#include <stdio.h>
/**
  * main - Program entry point
  * 2-print_alphabet - Prints alpha in lowercase
  *
  *Return: Always Success (0)
  */
int main(void)
{
	char low = 'a';

	while (low <= 'z')
	{
		printf("%c", low);
		low++;
	}
	printf("\n");
	return (0);
}
