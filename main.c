#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "test.h"



int main(void) {

    char testStr0[100] = {"First testString._"};
    // char test[100];
    int n;

    char t1[6] = {"\0"};
    char t2[6] = {"C"};

    //printf("result of cmp: %d \n", (n = 7));
    
    // strncpy(test, testStr0, 5);
    // puts(test);
    goTest(testStr0);

    return 0;
}