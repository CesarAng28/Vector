#include <stdio.h>
#include <stdlib.h>
#include "../libs/Vector.h"


Vector InitVector(size_t dimensions)
{
    Vector newVector = NULL;
    newVector = malloc(sizeof(struct _Vector));

    newVector->n_members = dimensions;
    newVector->components = malloc(sizeof(float)*dimensions);

    return newVector;
}

