#include <stdio.h>

/**
 * main - Prints the number of arguments followed by new line
 * @argc: Number of arguments
 * @argv: Array of strings for arguments
 *
 * Return: Return name
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
