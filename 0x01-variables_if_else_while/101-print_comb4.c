#include <stdio.h>
/**
  * main - Program entry point
  * 101-print_comb4 - Print combination of 3 different numbers
  * Return: Always Success (0)
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if (k > j && j > i)
				{
					printf("%d%d%d", i,j,k);
					if (i != j && j != k && k != i)
					{
						printf(",");
						printf(" ");
					}
				}
			}
		}
	}
	printf("\n");
	return (0);
}
