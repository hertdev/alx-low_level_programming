#include "dog.h"
#include <stdlib.h>

/**
  * free_dog - free memory space allocated
  * @d: dog pointer
  * Return: freed memory
  */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
