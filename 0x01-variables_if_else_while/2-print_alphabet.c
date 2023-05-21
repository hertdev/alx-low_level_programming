#include <stdio.h>
/**
  * main - Program entry point
  * 2-print_alphabet - Prints alpha in lowercase
  *
  *Return: Always Success (0)
  */
int main(void)
{
	int low = 'a';

	while (low <= 'z')
	{
		printf("%d", low);
		low++;
	}
	return (0);
}
