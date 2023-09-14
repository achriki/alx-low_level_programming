#include "lists.h"

/**
 * insert_dnodeint_at_index - insert at index
 * @h: head of list
 * @idx: index of node
 * @n: data
 * Return: pointer on node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current;
	dlistint_t *new;
	unsigned int len = 0;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (0);
	new->n = n;
	if (idx == 0)
	{
		new->next = *h;
		new->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new;
		*h = new;
		return (new);
	}
	else
	{
		current = *h;
		while (current)
		{
			if (idx == len)
			{
				new->next = current;
				new->prev = current->prev;
				if (current->prev != NULL)
					current->prev->next = new;
				current->prev = new;
				return (new);
			}
			current = current->next;
			len++;
		}
	}
	free(new);
	return (NULL);
}
