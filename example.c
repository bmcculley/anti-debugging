#include <stdio.h>
#include <sys/ptrace.h>

int main()
{
    if (ptrace(PTRACE_TRACEME, 0, 1, 0) == -1) 
    {
        printf("don't trace me!\n");
        return 1;
    }
    
    printf("Hello, this is normal execution.\n");
    return 0;
}