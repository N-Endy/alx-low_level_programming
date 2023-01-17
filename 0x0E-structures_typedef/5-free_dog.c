#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Function that frees dog structs
 * @d: Pointer to a struct
 *
 * Return: Void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		d->name = NULL;
		free(d->owner);
		d->owner = NULL;
		free(d);
		d = NULL;
	}
}
