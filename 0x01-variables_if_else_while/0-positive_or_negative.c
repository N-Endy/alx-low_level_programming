#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: A program that tells if a num is positive,
 *zero, or negative
 *Return: returns 0 on complete execution of program
 */
int main(void)
{
	int n;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
