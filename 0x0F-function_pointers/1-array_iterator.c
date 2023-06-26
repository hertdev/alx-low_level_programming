#include "function_pointers.h"

/**
  * array_iterator - execute function given as a parameter
  * @array: array iterator
  * @size: array size
  * @action: function pointer
  * Return: iterated function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
