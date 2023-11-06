#ifndef DOG_H
#define DOG_H

/*
 * Struct for representing a dog.
 */
typedef struct dog
{
	char *name; /* The name of the dog. */
	float age; /* The age of the dog. */
	char *owner; /* The name of the dog's owner. */
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

