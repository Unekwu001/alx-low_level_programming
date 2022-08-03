#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees a created dog.
 * @d: pointer to the created dog
 * Return: returns nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
		
}
