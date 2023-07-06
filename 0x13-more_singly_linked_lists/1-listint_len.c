#include "lists.h"

/**
  * listint_len - prints number of element in linked
  * @h: element pointer
  *
  * Return: int
  */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h)
	{
		len++;
		h = h->next;
	}

	return (len);
}
