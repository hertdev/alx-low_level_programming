#include <stdio.h>
/**
  * main - Program entry point
  * 5-print_numbers - prints numbers in base ten
  *
  * Return: numbers in base 10
  */
int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
