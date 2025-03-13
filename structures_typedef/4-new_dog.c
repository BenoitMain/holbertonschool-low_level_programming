#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _size - Calculates the length of a string.
 * @s: A pointer to the string.
 *
 * Return: The length of the string.
 */
int _size(char *s)
{
	int j = 0;

	while (*s != '\0')
	{
		j++;
		s++;
	}
	return (j);
}
/**
 * new_dog - Creates a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: Pointer to the newly created dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j;

	dog_t *my_dog = malloc(sizeof(dog_t));

	if (my_dog == NULL)
	{
		return (NULL);
	}

	my_dog->name = malloc((_size(name) + 1) * sizeof(char));
	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}
	my_dog->owner = malloc((_size(owner) + 1) * sizeof(char));
	if (my_dog->owner == NULL)
	{
		free(my_dog->name);
		free(my_dog);
		return (NULL);
	}

	for (i = 0; name[i] != '\0'; i++)
	{
		my_dog->name[i] = name[i];
	}
	my_dog->name[_size(name)] = '\0';

	for (j = 0; owner[j] != '\0'; j++)
	{
		my_dog->owner[j] = owner[j];
	}
	my_dog->owner[_size(owner)] = '\0';

	my_dog->age = age;

	return (my_dog);
}
