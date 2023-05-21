#include <stdio.h>
/**
  * main - Program entry point
  * 8-print_base16 - program printing alphabet
  *
  *Return: numbers in base 16
  */
int main(void)
{
	char num = '0';
	char alpha = 'a';

	while (num < '10')
	{
		putchar(num);
		num++;
	}
	while (alpha <= 'f')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
