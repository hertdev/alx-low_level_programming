#include "lists.h"

/**
  * pop_listint - program that delete the head node
  * @head: head pointer
  *
  * Return: head node
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
