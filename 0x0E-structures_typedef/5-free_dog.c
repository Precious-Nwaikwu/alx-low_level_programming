
#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dogs.
 * @d: struct dog.
 *
 * Return: no return.
 */
Return: no return.
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
