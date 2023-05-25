#include "main.h"

/**
  * times_table - prints the 9 times table
  * Return: result of table
  */
void times_table(void)
{
	int a, b, mul;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			mul = a * b;
			_putchar(mul);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
