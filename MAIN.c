#include <stdio.h> /* for standard input and output*/
#include <stdlib.h> /* for the getpid function*/
#include <unistd.h> /* for the pid_t data type*/

int main(void)
{
	pid_t my_pid; /* get the process ID of the current process*/

	my_pid = getpid();

	printf("%u\n", (unsigned int)my_pid); /* print the process ID*/

	return (0);
}
