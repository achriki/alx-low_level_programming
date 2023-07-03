#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates character
 * @s: pointer to string
 * @c: character to locate
 * Return: pointer to first occurence of c
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (s[i] == c)
		return (s + i);
	return (NULL);
}

/**
 * _strspn - gets length of substring
 * @s: pointer to string
 * @accept: pointer to prefix bytes
 * Description: calculates the number of bytes in the initial
 * segment of s which consist only of bytes from accept
 * Return: number of bytes
 **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	int byte = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (_strchr(accept, s[i]))
			byte++;
		else
			return (byte);
	}
	return (byte);
}
