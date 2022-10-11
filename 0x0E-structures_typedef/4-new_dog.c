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
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		lenName++;
	for (j = 0; owner[j] != '\0'; j++)
		lenOwner++;
	dog->name = malloc((sizeof(dog->name) * lenName) + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc((sizeof(dog->owner) * lenOwner) + 1);
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		dog->name[i] = name[i];
	}
	dog->name[i] = '\0';
	for (j = 0; owner[j] != '\0'; j++)
	{
		dog->owner[i] = owner[j];
	}
	dog->owner[j] = '\0';
	dog->age = age;
	return (dog);
}
