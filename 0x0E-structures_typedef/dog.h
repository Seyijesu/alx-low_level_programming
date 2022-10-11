#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this give name age and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * init_dog - initialize the dog structure
 * @d: address of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - print dog
 * @d: dog pointer
 */
void print_dog(struct dog *d);

/**
 * struct dog_t - this give name age and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

struct dog_t
{
	char *name;
	float age;
	char *owner;
};

#endif
