#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
  * new_dog - pointer to dog_t
  * @name: new dog name
  * @age: new dog age
  * @owner: new dog owner
  * Return: values of new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));

	if (dog->name == NULL)
	{
		return (NULL);
		free(dog->name);
	}

	dog->owner = malloc(sizeof(char) * (len2 + 1));

	if (dog->owner == NULL)
	{
		return (NULL);
		free(dog->owner);
	}
	strcpy(dog->name, name);
	strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
	free(dog);
}
