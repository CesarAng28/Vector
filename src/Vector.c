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

Vector freeVector(Vector phasor){
    free(phasor);
}

void setVector(size_t dimensions, float array[dimensions]){
    for(int i=0; i<dimensions; i++){
        array[i]= rand() % 50;
    }
}