#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to the new dog, or NULL if it fails
 */


dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(dog_t));
	if (!new)
	{
		return (NULL);
	}
	new_name = malloc(strlen(name) + 1);
	if (!new_name)
	{
		free(new);
		return (NULL);
	}
	new_owner = malloc(strlen(owner) + 1);
	if (!new_owner)
	{
		free(new_name);
		free(new);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new->name = new_name;
	new->age = age;
	new->owner = new_owner;
	return (new);
}
