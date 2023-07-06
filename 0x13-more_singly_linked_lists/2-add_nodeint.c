#include "lists.h"

/**
  * add_nodeint - add a new node
  * @head: node to node pointer
  * @n: numbers of node
  *
  * Return: list of node
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		printf("Error\n");
	}

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

