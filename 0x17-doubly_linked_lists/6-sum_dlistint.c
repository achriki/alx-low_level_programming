#include "lists.h"

/**
 * sum_dlistint - get sum of list
 * @head: head of list
 * Return: sum of list
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);
	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
