#include "lists.h"

/**
  * print_listint - print all elements in list
  * @h: element pointer
  * 
  * Return: all elements
  */
size_t print_listint(const listint_t *h)
{
	size_t len;

	if (h == NULL)
		return (1);

	for (len = 0; h != NULL; len++)
	{
		if (h == NULL)
			printf("NULL");
		else
			printf("%d\n", h->n);
		h = h->next;
	}

	return (len);
}
