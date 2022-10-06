#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
  *_calloc - Allocates memory for an array using malloc
  *
  * @nmemb : Number of element in the array
  * @size : size of byte each
  *
  * Return: void pointer
  *
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocate;
	char *ptr;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (x = 0; x < nmemb; x++)
	{
		ptr[x] = 0;
	}
	allocate = ptr;
	return (allocate);
}
