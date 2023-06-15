#include "main.h"

/**
  * malloc_checked - allocates memory using malloc
  * @b: character pointer
  * Return: memory space
  */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = (int *)malloc(b * sizeof(int));

	if (ptr == NULL)
		EXIT_FAILURE;
	return (ptr);
}
