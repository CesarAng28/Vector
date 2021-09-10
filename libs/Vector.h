/**
 * @Author Alonso Cabezut
 * @Date 8 Sep 2021
 * @Name Vector.h
 * @Copyright TDA Otoño 2021
 */

// SOLID Convention 

#ifndef Vector_h
#define Vector_h
// Bibliotecas Standard
#include <stdio.h>

// User Libraries


// Data Types

struct _Vector{
    float *components; // 32 bits
    size_t n_members; // 32 bit
};

// Wrapper
typedef struct _Vector* Vector;

// Interfaces

// Generator/Constructors


Vector InitVector(size_t dimensions);




#endif
