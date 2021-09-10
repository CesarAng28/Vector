#include <stdlib.h>
#include <stdio.h>

#include "../libs/Vector.h"
#include "../libs/unity.h"

#define SIZE 3
void setUp(void){
    
}

void tearDown(void){
    
}
void test_VectorInit(void){
    puts("Testing Vector Init function");
    Vector test_vector = NULL;
    test_vector = InitVector(SIZE);
    TEST_ASSERT_NOT_NULL(test_vector);
    freeVector(test_vector);
    
}

void test_FreeVector(void){
    puts("Testing Vector Free function");
    Vector test_vector2= NULL;
    test_vector2 = InitVector(SIZE);
    test_vector2 = freeVector(test_vector2);
    
    TEST_ASSERT_NULL(test_vector2);
    
}




int main(void){
    
    UNITY_BEGIN();
    RUN_TEST(test_VectorInit, __LINE__);
    RUN_TEST(test_FreeVector, __LINE__);
    
    Vector test_vector3 = NULL;
    test_vector3 = InitVector(SIZE);
    setVector(SIZE, test_vector3->components);
    imprimirVector(SIZE, test_vector3->components);
    test_vector3=freeVector(test_vector3);
    return UNITY_END();
}