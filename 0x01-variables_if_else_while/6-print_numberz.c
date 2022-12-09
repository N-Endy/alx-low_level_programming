#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all single digit numbers from 0 to 9 and then a new line
 *without using type char
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
