#include "main.h"

/**
  * set_bit - set value of bit to 1 at index
  * @n: bit number
  * @index: bit index
  *
  * Return: 1 at bit index
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
