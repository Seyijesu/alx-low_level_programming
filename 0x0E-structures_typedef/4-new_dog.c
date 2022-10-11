#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - sore the properties of the dog
 * @name: pointer to name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: the stored value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int lenName = 0;
	int lenOwner = 0;
	int i, j;
	dog_t dog;

	for (i = 0; name[i] != '\0'; i++)
		lenName++;

	for (j = 0; owner[j] != '\0'; j++)
		lenOwner++;

	dog->name = malloc(sizeof(dog->name) * lenName);
	dog->owner = malloc(sizeof(dog->owner) * lenOwner);

	if (dog->name == NULL || dog->owner == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}


	for (j = 0; owner[j] != '\0'; j++)
	{
		dog->owner[i] = owner[j];
	}

	dog->age = age;

	return (dog);
}
