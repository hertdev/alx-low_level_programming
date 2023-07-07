#include "main.h"

/**
  * clear_bit - set the value of bit to 0 at index
  * @n: bit pointer
  * @index: bit index
  *
  * Return: set value
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if ((*n >> index) & 1)
	{
		*n -= 1 << index;
		return (1);
	}
	return (1);
}
