#include <stdlib.h>
#include "dog.h"

/** free_dog - freas memorry allocation
 * @d: dog structure
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

