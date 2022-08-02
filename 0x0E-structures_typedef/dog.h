#ifndef DOG_H
#define DOG_H

#define UNUSED(x) (void)(x)

/**
 * struct dog - contains details of a pet dog.
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Description: explainations.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */

