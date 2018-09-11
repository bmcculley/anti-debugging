#include <stdio.h>
#include <stdlib.h>

void foo()
{
    printf("Hello, this is normal execution.\n");
}

int main()
{
    unsigned char *p = (unsigned char*)foo + 3;
    printf("%p\n",p);
    if ((*(volatile unsigned *)((unsigned)foo + 3) & 0xff) == 0xcc) {
        printf("BREAKPOINT: don't trace me!\n");
        exit(1);
    }
    foo();
}