#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - new struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of dog's owner
 **/
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
void free_dog(dog_t *d);
#endif
