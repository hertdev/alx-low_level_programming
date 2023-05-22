#include <stdio.h>
/**
  * main - Program entry point
  * 101-print_comb4 - Print combination of 3 different numbers
  * Return: Always Success (0)
  */
int main(void)
{
	int i, j, k;

	for (i = 48; i < 58; i++)
	{
		for (j = 49; j < 58; j++)
		{
			for (k = 50; k < 58; k++)
			{
				if (k > j && j > i)
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 55 || j != 56)
					{
						printf(',');
						printf(' ');
					}
				}
			}
		}
	}
	printf('\n');
	return (0);
}
