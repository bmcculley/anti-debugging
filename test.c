#include <stdio.h>

int main()
{
    unsigned char *p = (unsigned char*)main;
    printf("%p\n",p);
    return 0;
}