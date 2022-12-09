#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints all numbers from 0 to 9 and then a new line
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
