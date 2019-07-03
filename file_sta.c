#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <sys/stat.h>

int main(int argc, const char *argv[])
{
	printf("current process pid=%d\n",getpid());
	return 0;
}
