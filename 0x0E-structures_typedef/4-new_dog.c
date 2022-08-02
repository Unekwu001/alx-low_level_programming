#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - function that creates a new dog.
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: a pointer to the new dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog_t));

	if (d == NULL)
		return (NULL);

	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
	return (d);
}
