#include "main.h"
#include <stdlib.h>
/**
 * _strdup - allocate space for string
 * @str: pointer to string
 *
 * Return: pointer to string, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *p;
	char *q;
	int i;
	int c = 0;

	q = str;
	if (q == NULL)
		return (NULL);
	while (q[c] != '\0')
	{
		c++;
	}
	p = malloc((c + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	for (i = 0; q[i] != '\0'; i++)
	{
		p[i] = q[i];
	}
	return (p);
}
