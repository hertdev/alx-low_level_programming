#include "lists.h"

/**
  * print_list - print all elements of a list
  * @h: head pointer
  *
  * Return: elements of list
  */
size_t print_list(const list_t *h)
{
	size_t len;

	if (h == NULL)
		return (0);
	for (len = 0; h != NULL; len++)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", h->len, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
	}

	return (len);
}
