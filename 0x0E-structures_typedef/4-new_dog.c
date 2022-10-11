#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
  *new_dog - creates new dog struct
  *
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  *
  * Return: pointer
  *
 **/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	newDog = malloc(1 * sizeof(struct dog));
	if (newDog == NULL)
		return (NULL);
	newDog->name = name;
	newDog->age = age;
	newDog->owner = owner;
	return (newDog);
}
