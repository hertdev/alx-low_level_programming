#include "main.h"

/**
  * create_array - creates an array of char
  * @size: size of array elements
  * @c: char to consider
  * Return: array of chars
  */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *)malloc(size * sizeof(char));
	if (ptr == 0)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;
	ptr[i] = '\0';

	return (ptr);
}
