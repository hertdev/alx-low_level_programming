#include "main.h"

/**
  * reverse_array - function to reverse the array of strings
  * @a: integer pointer
  * @n: array time
  * Return: reversed array
  */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	j = n - 1;

	for (i = 0; i < j; i++)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
		j--;
	}
}
