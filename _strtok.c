#include "shell.h"

/**
 * _strtok - function that tokenizes a string
 * @str: string to tokenize
 * @delim: delimiter
 * Return: pointer to the next token or NULL
 */
char *_strtok(char *str, const char *delim)
{
	static char *tokens;
	static char *next_token;
	unsigned int i, j;

	if (str != NULL)
		next_token = str;
	tokens = next_token;
	if (tokens == NULL)
		return (NULL);
	for (i = 0; tokens[i] != '\0'; i++)
	{
		for (j = 0; delim[j] != '\0'; j++)
		{
			if (tokens[i] == delim[j])
			{
				tokens[i] = '\0';
				next_token = &tokens[i + 1];
				return (tokens);
			}
		}
	}
	if (tokens[i] == '\0')
		next_token = NULL;
	return (tokens);
}
