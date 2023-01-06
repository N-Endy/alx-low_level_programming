#include <stdio.h>

/**
 * main - Prints all arguments it receives
 * @argc: Number of arguments
 * @argv: Array of strings for arguments
 *
 * Return: Return name
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
