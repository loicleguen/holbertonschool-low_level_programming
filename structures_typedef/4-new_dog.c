#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: chaîne de caractères
 * Return: longueur
 */
int _strlen(char *s)
{
	int len = 0;

	while (s && s[len])
		len++;

	return (len);
}

/**
 * _strcpy - copie une chaîne dans une autre
 * @dest: destination
 * @src: source
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - crée une nouvelle structure dog
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 * Return: pointeur vers la nouvelle structure, ou NULL si échec
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name, *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (!new_dog)
		return (NULL);

	new_name = malloc((_strlen(name) + 1) * sizeof(char));
	if (!new_name)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc((_strlen(owner) + 1) * sizeof(char));
	if (!new_owner)
	{
		free(new_name);
		free(new_dog);
		return (NULL);
	}

	_strcpy(new_name, name);
	_strcpy(new_owner, owner);

	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;

	return (new_dog);
}
