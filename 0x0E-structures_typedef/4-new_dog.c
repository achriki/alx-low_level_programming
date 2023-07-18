#include "dog.h"
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
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(struct dog));

	if (new_dog == NULL || name == NULL || owner == NULL)
		return (NULL);
	new_dog->name = _strdup(name);
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (0);
	}
	new_dog->age = age;
	new_dog->owner = _strdup(owner);
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (0);
	}
	return (new_dog);
}
