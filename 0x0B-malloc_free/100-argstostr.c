#include <stdio.h>
#include <stdlib.h>

/**
  *argstostr - concatenates all it arguments.
  *
  * @ac : integer argument.
  * @av : arguments.
  *
  * Return: a pointer
  *
 **/

char *argstostr(int ac, char **av)
{
	char *concat;
	int x, y, a, sum = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (av[x][y] != '\0')
		{
			sum++;
			y++;
		}
	}
	concat = malloc((sum + ac - 1) * sizeof(char));
	if (concat == NULL)
		return (NULL);
	a = 0;
	for (x = 0; x < ac; x++)
	{
		y = 0;
		while (1)
		{
			if (av[x][y] == '\0')
			{
				concat[a] = '\n';
				a++;
				break;
			}
			concat[a] = av[x][y];
			a++;
			y++;
		}
	}
	return (concat);
}
