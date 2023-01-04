#include "main.h"

/**
 * wildcmp - Compares two strings
 * @s1: String one
 * @s2: String two
 *
 * Return: Returns 1 or 0 if the strings are identical or not
 */

int wildcmp(char *s1, char *s2)
{
	/* base case: if both strings are empty, they are equal */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	/* if s2 is empty, s1 must be empty for equal strings */
	if (*s2 == '\0')
		return (0);

	/* if s2 is '*', recursively check the rest of s1 and s2 */
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	/* if the characters are not equal, return 0 */
	if (*s1 != *s2)
		return (0);

	/* otherwise, recursively check the rest of the strings */
	return (wildcmp(s1 + 1, s2 + 1));
}
