#include <stdio.h>
/**
  * main - Program entry point
  * 5-print_numbers - prints numbers in base ten
  *
  * Return: numbers in base 10
  */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number);
	putchar('\n');
	return (0);
}
