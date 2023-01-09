#include "main.h"

/**
 * create_array - Creates an array of chars and initialize with
 * specific char.
 * @size: Size of intending array.
 * @c: Character to be placed in the array.
 *
 * Return: Returns pointer to the array or NULL.
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	int *ptr;

	if (size == 0)
		return (NULL);

	ptr = malloc(sizeof(unsigned int) * size);
	while (i < size)
	{
		ptr[i] = c;
		i++;
	}
	return (ptr || NULL);
}

void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *buffer;

    buffer = create_array(98, 'H');
    if  (buffer == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    simple_print_buffer(buffer, 98);
    free(buffer);
    return (0);
}
