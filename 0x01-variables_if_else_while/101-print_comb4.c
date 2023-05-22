#include <stdio.h>
/**
  * main - Program entry point
  * 101-print_comb4 - Print combination of 3 different numbers
  * Return: Always Success (0)
  */
int main(void)
{
	int i, j, k;

	for (i = 0; i < 8; i++)
	{
		for (j = 1; j < 9; j++)
		{
			for (k = 2; k < 10; k++)
			{
				if ( i != j && j != k && i != k)
				{
					printf("%d%d%d", i,j,k);
					printf(",");
					printf(" ");
				}
			}
		}
	}
	printf("\n");
	return (0);
}
