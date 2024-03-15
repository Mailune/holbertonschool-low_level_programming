#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - Creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Return: Pointer to new dog structure or NULL if malloc fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog_ptr;
	char *name_copy, *owner_copy;
	int name_length, owner_length, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	name_length = 0;
	while (name[name_length] != '\0')
		name_length++;

	owner_length = 0;
	while (owner[owner_length] != '\0')
		owner_length++;
	new_dog_ptr = malloc(sizeof(dog_t));
	if (new_dog_ptr == NULL)
		return (NULL);
	name_copy = malloc(sizeof(char) * (name_length + 1));
	if (name_copy == NULL)
	{
		free(new_dog_ptr);
		return (NULL);
	}
	for (i = 0; i <= name_length; i++)
		name_copy[i] = name[i];
	owner_copy = malloc(sizeof(char) * (owner_length + 1));
	if (owner_copy == NULL)
	{
		free(new_dog_ptr);
		free(name_copy);
		return (NULL);
	}
	for (i = 0; i <= owner_length; i++)
		owner_copy[i] = owner[i];
	new_dog_ptr->name = name_copy;
	new_dog_ptr->age = age;
	new_dog_ptr->owner = owner_copy;

	return (new_dog_ptr);
}
