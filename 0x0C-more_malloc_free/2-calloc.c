#include "main.h"

/**
  * _memset - allocate constant byte to memory
  * @s: memory arrea
  * @b: char to copy
  * @n: number of time to copy
  * Return: constant bytes in maddress
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
  * _calloc - allocates memory for an array
  * @nmemb: array elements
  * @size: total size of array
  * Return: allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int res;

	res = nmemb * size;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(res);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, res);

	return (ptr);
}
