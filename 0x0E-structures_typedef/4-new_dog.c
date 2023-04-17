#include "dog.h"
#include <stdlib.h>

/**
 **_strcpy - copies
 *@src: source
 *@dest: destination
 *Return: returns
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}

/**
 *_strlen - counts
 *@s: string or smtg
 *Return: counter
 */

int _strlen(char *s)
{
	int counter = 0;

	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}

/**
 *new_dog -  a function that creates a new dog.
 *@name: name
 *@age: age
 *@owner: owner
 *Return: returns
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *pdog;
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	pdog = malloc(sizeof(dog_t));
	if (pdog == NULL)
		return (NULL);
	pdog->name = malloc((len1 + 1) * sizeof(char));
	if (pdog->name == NULL)
	{
		free(pdog);
		return (NULL);
	}
	pdog->owner = malloc((len2 + 1) * sizeof(char));
	if (pdog->owner == NULL)
	{
		free(pdog);
		free(pdog->name);
		return (NULL);
	}
	_strcpy(pdog->name, name);
	_strcpy(pdog->owner, owner);
	pdog->age = age;
	return (pdog);
}
