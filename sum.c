#include <stdio.h>
#include <unistd.h>

/**
 * main - writes to stdout
 * void: no arg passed
 * Return: Aways 0
 */
int main(void)
{
	const char *message = "ALX Task 0 file\n";
	size_t message_length = 18;
	ssize_t bytes_written = write(STDERR_FILENO, message, message_length);

if (bytes_written != message_length)
	{
	perror("Error writing to stderr");
	return (1);
	}

	return (0);
}
