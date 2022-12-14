#include <stdlib.h>

/**
 * _strdup - Gives a ppointer to a newly allocated space in memory
 * @str: The string to be duplicated
 *
 * Return: Returns a pointer
 */

char *_strdup(char *str)
{
	char *str_cpy;
	unsigned int i;

	/* checks if initial string is empty */
	if (str == NULL)
		return (NULL);

	/* get the length of str */
	for (i = 0; str[i]; i++)
		;
	i++;

	/* allocates memory space for duplicate */
	str_cpy = malloc(sizeof(char) * i);
	if (str_cpy == NULL)
		return (NULL);

	/* iterates through initial string and copy to duplicate */
	for (i = 0; str[i] != '\0'; i++)
		str_cpy[i] = str[i];
	return (str_cpy);
}
