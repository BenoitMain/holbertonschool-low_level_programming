#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Libère la mémoire allouée pour un objet de type dog_t.
 * @d: Pointeur vers la structure dog_t à libérer.
 *
 * Return: VOID.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}

	free(d->name);
	free(d->owner);
	free(d);
}


