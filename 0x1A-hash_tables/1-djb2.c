#include "hash_tables.h"
/**
 * hash_djb2 - hash function with djb2 algorithm
 * @str: key of hash table
 * Return: index of hash table
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
