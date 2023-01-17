#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - a function that gets a length of string
 * @str: the string to get the length
 *
 * Return: length of string
*/

int _strlen(char *str)
{
	int length = 0;

	while (*str++)
		length++;
	return (length);
}

/**
 * _strcopy - a function that returns a copy of a string from string
 * @src: string to copy
 * @dest: duplicate of string
 *
 * Return: Returns string
*/

char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: dog owner
 *
 * Return: returns a new dog struct
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	/* Check if parameters of struct exists */
	if (!name || age < 0 || !owner)
		return (NULL);

	/* allocate memory for dog */
	dog = malloc(sizeof(dog_t));

	/* Check if memory is properly allocated */
	if (dog == NULL)
		return (NULL);

	/* Allocate memory for name of dog */
	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	/* Check if memory is properly allocated */
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	/* Set the name of dog */
	dog->name = _strcopy(dog->name, name);

	/* Set age of dog */
	dog->age = age;

	/* Allocate memory for owner of dog */
	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	/* Check if memory is properly allocated */
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	/* Set owner of dog */
	dog->owner = _strcopy(dog->owner, owner);

	return (dog);
}
