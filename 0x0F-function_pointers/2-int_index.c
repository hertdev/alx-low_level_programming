#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array of elements
  * @size: size of array
  * @cmp: the function pointer
  *
  * Return: void integer search result
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int indx;

	if (cmp && array)
	{
		for (indx = 0; indx < size; indx++)
		{
			if (cmp(array[indx]) != 0)
				return (indx);
		}
	}
	return (-1);
}
