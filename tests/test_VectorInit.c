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
    free(test_vector);
    
}

int main(void){
    UNITY_BEGIN();
    
    RUN_TEST(test_VectorInit, __LINE__);
   
    return UNITY_END();
}