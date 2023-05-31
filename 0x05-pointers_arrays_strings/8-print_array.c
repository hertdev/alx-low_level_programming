#include "main.h"
#include <stdio.h>

/**
  * print_array - prints an array of number
  * @a: pointer element
  * @n: array number
  * Return: array of numbers
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	putchar('\n');
}
