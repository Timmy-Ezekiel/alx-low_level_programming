#include <stdio.h>

/**
  * print_array - Print a specific element of an array at specified index
  *
  * @a : an integer pointer varible to the array.
  * @n : The index of the number to be printed.
  *
 **/

void print_array(int *a, int n)
{
	int x;

	x = 0;
	while (x < n)
	{
		printf("%d", *(a + x));
		if (x != (n - 1))
		{
			putchar(',');
			putchar(' ');
		}
		x++;
	}
	putchar('\n');
}
