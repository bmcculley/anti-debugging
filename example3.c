#include <signal.h>

void handler(int signo)
{
}

int main()
{
	signal(handler, SIGTRAP);
	__asm__("int3");
	printf("Hello\n");
}