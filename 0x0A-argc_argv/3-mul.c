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
	int sum;

	sum = 0;
	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", sum);
	}
	return (0);
}
