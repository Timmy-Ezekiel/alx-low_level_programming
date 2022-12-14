#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  *init_dog - Initialize the varible of the type struct dog
  *
  *@d : struct specific name
  *@name : name of the dog
  *@age : age of the dog
  *@owner : name of owner
  *
  * Return: void
  *
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
