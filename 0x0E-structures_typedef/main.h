#ifndef MAIN_H
#define MAIN_H

#define UNUSED(x) (void)(x)

#include <stdio>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <limits.h>

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* MAIN_H */

