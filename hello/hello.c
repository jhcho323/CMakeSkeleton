#include <stdio.h>
#include "hello.h"
#include "global_def.h"

void print_hello(void)
{
    printf(HELLO_WORLD);
}


int main(void)
{
        print_hello();
        printf("DOUBLE(2) = %d\n",DOUBLE(2));
        return 0;
}

