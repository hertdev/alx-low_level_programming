#include "main.h"

/**
  * _strdup - return pointer to newly allocated space in memory
  * @str: string to copy
  * Return: copied string given as parameter
  */
char *_strdup(char *str)
{
	char *ptr;
	int n = 0;

	ptr = (char *)malloc(n * sizeof(char));

	if (ptr == NULL)
		return (NULL);
	ptr = str;

	return (ptr);
}
