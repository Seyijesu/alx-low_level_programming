#ifndef DOG_H
#define DOG_H
/**
 * struct dog - this give name age and owner of dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

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
 * new_dog - sore the properties of the dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the stored value
 */
dog_t *new_dog(char *name, float age, char *owner);
/**
 * free_dog - frees dog
 * @d: dog to free
 */
void free_dog(dog_t *d);
#endif
