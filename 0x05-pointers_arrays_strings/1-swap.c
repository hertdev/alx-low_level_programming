#include "main.h"

/**
  * swap_int - function to swap two int
  * @a: function param pointer
  * @b: function param pointer 2
  * Return: swapped value
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
