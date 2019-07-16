#include <stdio.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
	pid_t pid;
	pid = getpid();
	printf("%d ",pid);
	printf("\n");
	return 0;
}
