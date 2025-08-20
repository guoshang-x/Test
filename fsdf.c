#include "fork_test.h"

int test2(void)
{
    test(NULL);
    return 0;
}
/*
 * This is a sample C program by fork test.
 */
#include <stdio.h>

int test(void) {
    printf("Hello, World!\n");
    return 0;
}
