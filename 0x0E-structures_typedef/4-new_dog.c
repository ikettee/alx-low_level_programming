#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - a function that returns a lenght of string
 * @s: the string
 * Return: string length
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	while (s[g] != '\0')
	{
		g++;
	}

	return (g);
}

/**
 * _strcpy - a function that copies the string
 * @dest: the pointer to the buffer
 * @src: the string to copy
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, g;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (g = 0; g < len; g++)
	{
		dest[g] = src[g];
	}
	dest[g] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog's owner
 * Return: a pointer to the new dog for success or NULL for failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (len1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
