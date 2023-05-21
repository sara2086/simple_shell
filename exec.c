#include "shell.h"

int check_builtin(char **cmd, int er)
{
	bul_t check[] = {
	{"cd", ch_dir},
	{"env", _env},
	{"help", _help},
	{"echo", echo_bul},
	{"history", _history},
	{NULL, NULL}
	};

	for (int i = 0; check[i].name != NULL; i++)
	{
	if (strcmp(cmd[0], check[i].name) == 0)
	{
		return (check[i].func(cmd, er));
	}
	}

	return (-1);
}

int check_cmd(char **cmd, char *input, int c, char **argv)
{
	if (*cmd == NULL)
	{
	return (-1);
	}

	pid_t pid = fork();

	if (pid == -1)
	{
	perror("Error");
	return (-1);
	}

	if (pid == 0)
	{
	if (strncmp(*cmd, "./", 2) != 0 && strncmp(*cmd, "/", 1) != 0)
	{
		path_cmd(cmd);
	}

	if (execve(*cmd, cmd, environ) == -1)
	{
		perror(cmd[0], c, argv);
		free(input);
		free(cmd);
		exit(EXIT_FAILURE);
	}

		return (EXIT_SUCCESS);
	}

	int status;

	wait(&status);

	return (0);
}

void signal_to_handel(int sig)
{
	if (sig == SIGINT)
	{
	printf("\n$ ");
	}
}

