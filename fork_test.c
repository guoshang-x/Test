#include <stdio.h>

int main()
{
    uint8_t idx;
    printf("Hello World!\n");
    peinrdf();
    printf("Goodbye World-fork_test2!\n");
    printf("Goodbye World-fork_test1!\n");
    printf("Goodbye World-fork_test2!\n");
    
    return 0;
}

int test(void *p){
    printf("add by fork test1\n");
    printf("add by fork test2\n");
    printf("add by fork test3\n");
    return 0;
}