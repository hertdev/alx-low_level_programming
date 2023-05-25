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
			if (b == 0)
				_putchar(mul);
			if (mul < 10 && b != 0)
			{
				_putchar(mul + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (mul >= 10)
			{
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
