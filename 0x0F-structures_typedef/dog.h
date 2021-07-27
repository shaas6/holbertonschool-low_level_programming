#ifndef DOG_H
#define DOG_H

/**
 * struct dog - info de doge
 * @name: name of doge
 * @age: age of doge
 * @owner: whose doge is it
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
