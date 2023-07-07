#include "main.h"

/**
  * binary_to_uint - function that converts a binary
  * number to an unsigned int
  * @b: pointer to a string of 0 and 1
  *
  * Return: unsigned int
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num, i;

	if (!b || !*b)
		return (0);
	num = i = 0;
	while (b[i])
	{
		if (b[i] > 49)
			return (0);
		else if (b[i] == 49)
		{
			num <<= 1;
			num += 1;
		}
		else
			num <<= 1;
		i++;
	}
	return (num);
}
