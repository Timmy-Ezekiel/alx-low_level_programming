#include <stdio.h>

/**
  *array_iterator - Executes a function given each element
  *as a parameter to the function.
  *
  *@array : The array
  *@size : Size of the array (no of elments)
  *@action: function to be performed on each element
  *
 **/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
	{
		(*action)(array[x]);
	}
}
