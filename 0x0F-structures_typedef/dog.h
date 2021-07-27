#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info de doge
 * @name: name of doge
 * @age: age of doge
 * @owner: whose doge is it
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog;
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);

#endif
