#include "lists.h"

/**
 * free_dlistint - free a list
 * @head: pointer on head
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	current = head;
	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
