#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate strings
 * @s1: string 1
 * @s2: string 2
 * Return: NULL if failure
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int c = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[c] != '\0')
		c++;

	p = malloc((c + i + 1) * sizeof(char));

	if (p == NULL)
		return (NULL);
	i = c = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}

	while (s2[c] != '\0')
	{
		p[i] = s2[c];
		i++;
		c++;
	}
	return (p);
}
