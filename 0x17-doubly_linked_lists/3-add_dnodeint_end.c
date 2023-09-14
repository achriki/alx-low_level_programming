#include "lists.h"

/**
 * add_dnodeint_end -  add node to header
 * @head: head of list
 * @n: number to add
 * Return: new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		current = *head;
		while (current->next)
			current = current->next;
		new->n = n;
		new->next = NULL;
		new->prev = current;
		current->next = new;
	}
	return (new);
}
