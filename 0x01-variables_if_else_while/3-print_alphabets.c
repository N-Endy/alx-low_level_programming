#include <stdio.h>

/**
 *main - Entry point for all C programs
 *
 *Description: Prints alphabets from a to Z
 *Return: Returns 0 on successful completion of program
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
