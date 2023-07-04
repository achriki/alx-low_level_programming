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
	char *a;
	char *b;

	a = src;
	b = dest;

	while (*b != '\0')
	{
		b++;
	}
	while (*a != '\0')
	{
		*b = *a;
		a++;
		b++;
	}
	return (dest);
}
