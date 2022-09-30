#include <stdio.h>
#include <stdlib.h>

/**
  * main - Entry point
  *
  * @argc : Argument Counts (Int parameter)
  * @argv : Arguments (String Pointer)
  *
  * Return: integer (0) Success
  *
 **/

int main(int argc, char **argv)
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
