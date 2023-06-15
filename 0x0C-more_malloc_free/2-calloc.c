#include "main.h"

/**
  * _calloc - allocates memory for an array
  * @nmemb: array elements
  * @size: the size of array
  * Return: allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = calloc(nmemb, sizeof(size));

	for (i = 0; i < size; i++)
		ptr[i] = nmemb;
	return (ptr);
}
