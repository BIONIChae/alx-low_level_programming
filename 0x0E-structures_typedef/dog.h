#ifndef _DOG_H
#define _DOG_H

/**
 * struct dog - prints a struct dog.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: The dog owner.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog_t; /*Typedef for struct dog.*/
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
