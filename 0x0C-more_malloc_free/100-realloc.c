#include <stdio.h>
#include <stdlib.h>

/**
  * _realloc - reallcates memory using malloc and free
  *
  * @ptr : memory previously allocated
  * @old_size : size of ptr in byte
  * @new_size: size of the new memory block
  *
  * Return: void pointer
  *
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newstring;
	char *point;
	unsigned int x, y;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		point = malloc(new_size);
		if (point == NULL)
			return (NULL);
	{
	point = malloc(new_size);
	if (new_size == old_size)
		return (ptr);
	if (new_size > old_size)
	{
		y = old_size;
	}
	for (x = 0; x < y; x++)
	{
		point[x] = ptr[x];
	}
	free(ptr);
	newstring = point;
	return (newstring);
}
