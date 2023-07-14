#include "main.h"

/**
 * _strcat - concatenates two strings..
 * @dest: pointer to dest string
 * @src: pointer to src string
 *
 * Description: Appends src string to the dest string
 * Return: pointer to resulting dest string
 */
char *_strcat(char *dest, char *src)
{
	char *p1;
	char *p2;

	p1 = dest;
	p2 = src;
	while (*p1 != '\0')
		p1++;
	while (*p2 != '\0')
	{
		*p1 = *p2;
		p1++;
		p2++;
	}

	return (dest);
}
