#include <stdlib.h>
#include "dog.h"

/**
  * _strlen - returns the lenght of a string
  * @s: string to evaluate
  *
  * Return: the lenght of the string
  */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
  * _strcopy - copies the string pointed to by src
  * including the terminating null byte, to the buffer pointed to by dest
  * @dest: The buffer storing the string copy
  * @src: The soure string
  *
  * Return: the pointer to dest
  */
char* _strcopy(char *dest, char *src)
{
	int index = 0

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}

/**
  * new_dog - creates a new dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: owner of the dog
  *
  * Return: The new struct dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	{
		dog_t*doggo;

		if (name == NULL || age < 0 || owner == NULL)
			return (NULL);
		doggo = malloc(sizeof(dog_t);
		if (doggo == NULL)
				return (NULL);
	}
	doggo->name = malloc(sizeof(char)* (_strlen(name) + 1));
	if (doggo->name ==  NULL)
	{
		free(doggo);
		return (NULL);
	}

	doggo->owner = malloc(sizeof(char)* (_strlen(owner) + 1));
          if (doggo->owner ==  NULL)
          {
                  free(doggo-> name);
		  free(doggo);
                  return (NULL);
		}

		doggo->name = _strcopy(doggo->name, name);
		doggo-> = gae;
		doggo->owner = __strcopy(doggo->owner, owner);

		return (doggo);
}
