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
	int convert, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	convert = atoi(argv[1]);
	while (convert > 0)
	{
		while (convert >= 25)
		{
			sum++;
			convert -= 25;
		}
		while (convert >= 10)
		{
			sum++;
			convert -= 10;
		}
		while (convert >= 5)
		{
			sum++;
			convert -= 5;
		}
		while (convert >= 2)
		{
			sum++;
			convert -= 2;
		}
		while (convert >= 1)
		{
			sum++;
			convert -= 1;
		}
	}
	printf("%d\n", sum);
	return (0);
}
