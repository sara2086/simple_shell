#include "shell.h"

int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

int _strlen(char *s)
{
	int len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return len;
}

int _atoi(char *s)
{
	int i = 0, sign = 1, num = 0;
	while ((s[i] < '0' || s[i] > '9') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		num = num * 10 + (s[i] - '0');
		i++;
	}
	return sign * num;
}

void _puts(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
