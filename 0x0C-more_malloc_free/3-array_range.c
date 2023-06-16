#include "main.h"

/**
  * array_range - created an array of integers
  * @min: minimum integer
  * @max: maximum integer
  * Return: array of integers
  */
int *array_range(int min, int max)
{
	int i, size;
	int *ptr;

	size = max - min + 1;

	if (min > max)
		return (NULL);
	ptr = malloc(size * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; min <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
