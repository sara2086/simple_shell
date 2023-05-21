#include "shell.h"

char prompt(void)
{
	char *prompt_str = "$ ";
	char *input;

	while (1)
	{
	printf("%s", prompt_str);
	input = _getline();
	printf("%s", input);
	free(input);
	}

	return (0);
}

