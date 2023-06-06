#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: memory dest pointer to copy to
  * @src: char to copy
  * @n: number of times to copy
  * Return: copied string
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
