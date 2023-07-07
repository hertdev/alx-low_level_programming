#include "lists.h"

/**
  * get_nodeint_at_index - get node index
  * @head: head node
  * @index: node index
  *
  * Return: integer
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp = head;

	unsigned int i = 0;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
