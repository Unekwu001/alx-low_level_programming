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
	d = malloc(sizeof(dog_t));
	free(d);

	if (d == NULL)
		return;

	if (d != NULL)
	{
		free(d);
	}
}
