#include "lists.h"

/**
  * free_listint - frees a list
  * @head: head of list pointer
  *
  * Return: freed heap summary
  */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
