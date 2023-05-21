#include <stdio.h>
/**
  * main - Program entry point
  * 8-print_base16 - program printing alphabet
  *
  *Return: numbers in base 16
  */
int main(void)
{
	int num;
	char alpha;

	for (num = 0; num < 10; num++)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
