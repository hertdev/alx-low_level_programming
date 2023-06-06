#include "main.h"

/**
  * _memset - fills the memory with constant byte
  * @s: character pointer
  * @b: char that will fill the memory
  * @n: number of times to print
  * Return: character
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
