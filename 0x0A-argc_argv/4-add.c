#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry Point
  *
  * @argc : Argument counts
  * @argv : Argumes pointer
  *
  * Return: intger (0) Success
  *
 **/

int main(int argc, char **argv)
{
	int x, sum;
	int convert;

	sum = 0;
	for (x = 1; x < argc; x++)
	{
		convert = atoi(argv[x]);
		if (convert == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum = sum + convert;
	}
	printf("%d\n", sum);
	return (0);
}
