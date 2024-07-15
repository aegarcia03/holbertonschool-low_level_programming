#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: character pointer name
 * @age: integer
 * @owner: character pointer owner
 *
 * Return:A ponter to the newly 'dog_t' structure
 * initialized with copies of name, age, owner.
 * or  NULL if function fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	unsigned int n = 0, o = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	while (name[n] != '\0')
		n++;
	while (owner[o] != '\0')
		o++;

	new_dog->name = malloc(sizeof(char) * (n + 1));

	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < n; i++)
		new_dog->name[i] = name[i];
	new_dog->name[n] = '\0';

	new_dog->age = age;

	new_dog->owner = malloc(sizeof(char) * (o + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog);
		return (NULL);
	}

	for (i = 0; i < o; i++)
		new_dog->owner[i] = owner[i];
	new_dog->owner[o] = '\0';

	return (new_dog);
}
