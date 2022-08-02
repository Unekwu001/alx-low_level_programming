#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog -this function initialises a variable of type "struct dog"
 * struct dog - struct containing pet dog details.
 * @d: pointer to the struct type variable holding pet details.
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: Nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
