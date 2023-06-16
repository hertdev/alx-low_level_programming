#include "main.h"

/**
  * _realloc - reallocate memory block
  * @ptr: pointer to memory
  * @old_size: old memory size
  * @new_size: new memory size
  * Return: array of reallocated memory
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (!ptr)
		return (malloc(new_size));
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	old_ptr = ptr;

	new_ptr = malloc(new_size);

	if (!new_ptr)
		return (NULL);
	if ((new_size > old_size) && (new_size < old_size))
	{
		for (i = 0; ((i < new_size) && (i < old_size)); i++)
			new_ptr[i] = old_ptr[i];
	}
	return (new_ptr);
}
