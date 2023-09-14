#include "lists.h"

/**
 * print_dlistint - print elements of dlist
 * @h: head of list
 * Return: size of list
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *c;
	size_t len = 0;

	if (h == NULL)
		return (0);
	c = h;
	while (c)
	{
		printf("%d\n", c->n);
		c = c->next;
		len++;
	}
	return (len);
}
