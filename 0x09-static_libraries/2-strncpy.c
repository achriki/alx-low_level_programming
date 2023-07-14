#include "main.h"

/**
 * _strncpy - copies string to another.
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: int
 *
 * Return: pointer to resulting dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *p1;
	char *p2;

	i = 0;
	p1 = dest;
	p2 = src;

	while (*p2 != '\0' && i < n)
	{
		*p1 = *p2;
		p1++;
		p2++;
		i++;
	}
	if (*p2 == '\0')
	{
		while (i < n)
		{
			*p1 = '\0';
			p1++;
			i++;
		}
	}
	return (dest);
}
