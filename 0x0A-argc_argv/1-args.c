#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc : Argument counts
  * @argv : Arguments
  *
  * Return: Integer (0) Success
  *
 **/

int main(int argc, char **argv)
{
	if (argv)
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
