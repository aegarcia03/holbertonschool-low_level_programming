#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog.
 * @name: name of the do.g
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return:A ponter to the newly 'dog_t' structure
 * initialized with copies of name, age, owner.
 * or  NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
