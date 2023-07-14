#include "main.h"

/**
 * _strncat - concatenates two strings.
 * @dest: pointer to dest string
 * @src: pointer to src string
 * @n: int
 *
 * Description: Appends at most n from src string to the dest string
 * Return: pointer to resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *p1;
	char *p2;

	i = 0;
	p1 = dest;
	p2 = src;

	while (*p1 != '\0')
	{
		p1++;
	}
	while (*p2 != '\0' && i < n)
	{
		*p1 = *p2;
		p1++;
		p2++;
		i++;
	}

	return (dest);
}
