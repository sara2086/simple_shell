#include "shell.h"

/**
 * args - prints all arguments passed to it
 * @ac: number of items in av
 * @av: NULL terminated array of strings
 * Return: Always 0
 */
int args(int ac, char *av[])
{
	int i;

	for (i = 0; i < ac; i++)
	{
		printf("%s\n", av[i]);
	}
	return (0);
}
