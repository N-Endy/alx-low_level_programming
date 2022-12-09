#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all numbers from 0 to 9 and then a new line
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
