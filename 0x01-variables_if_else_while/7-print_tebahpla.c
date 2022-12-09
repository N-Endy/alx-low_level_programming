#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints alphabet a -z in reverse then a new line
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	char ch;

	ch = 'z';
	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
