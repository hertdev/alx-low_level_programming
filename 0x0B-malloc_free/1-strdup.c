#include "main.h"

/**
  * _strdup - return pointer to newly allocated space in memory
  * @str: string to copy
  * Return: copied string given as parameter
  */
char *_strdup(char *str)
{
	char *ptr;

	ptr = malloc(strlen(str) + 1);

	if (ptr == NULL)
		return (NULL);
	strcpy(ptr, str);
	return (ptr);
}
