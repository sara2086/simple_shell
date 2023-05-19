#include "shell.h"

/**
 * _strtok - extract tokens from string
 * @str: string
 * @delim: delimiter to tokenize in string
 * Return: Pointer to next token Or NULL
 */
char *_strtok(char *str, const char *delim)
{
	static char *next_tok;
	char *token;
	unsigned int i, j;

	if (str != NULL)
		next_tok = str;

	if (next_tok == NULL)
		return (NULL);

	for (i = 0; next_tok[i] != '\0'; i++)
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (next_tok[i] == delim[j])
				break;
		}
		if (delim[j] == '\0')
			break;
	}

	if (next_tok[i] == '\0')
	{
		next_tok = NULL;
		return (NULL);
	}

	token = next_tok;
	next_tok = next_tok + i + 1;

	return (token);
}
