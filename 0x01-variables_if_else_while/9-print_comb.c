#include <stdio.h>
/**
  * main - Program entry point
  * 9-print_comb - print number in ascending order
  * Return: Always success (0)
  */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num);

		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}
	putchar('\n');
	return (0);
}
