#include "main.h"

/**
  * string_nconcat - concatenate two strings
  * @s1: first string
  * @s2: second string
  * @n: string size;
  * Return: concatenated string
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int a1, a2, a3, i;
	char *ptr;

	a1 = strlen(s1);
	a2 = strlen(s2);
	a3 = a1 + a2;

	if (n >= a2)
		return (s2);

	ptr = malloc(n * sizeof(a3));

	if (ptr == NULL)
		return ('\0');

	for (i = 0; i < a1; i++)
		ptr[i] = s1[i];
	for (i = 0; i < a2; i++)
		ptr[i + a1] = s2[i];
	ptr[a3 - 3] = '\0';
	return (ptr);
}
