/**
 * @Author Alonso Cabezut
 * @Date 17 Aug 2021
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
typedef enum{
    _FALSE,
    _TRUE
}_bool;

// Interfaces

// Generator/Constructors


ComplexNumber newComplexNumber(void);


ComplexNumber setComplexNumber(ComplexNumber phasor, float real, float imaginary);


ComplexNumber getComplexNumberComponents(ComplexNumber phasor, float *real, float *imaginary);


ComplexNumber freeComplexNumber(ComplexNumber phasor);

#endif
