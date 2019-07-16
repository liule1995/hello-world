#include <stdio.h>
#include <unistd.h>

int main(int argc, const char *argv[])
{
	pid_t pid;
	pid = fork();
	if(0 == pid)
	{
		printf("这是子进程，其id为%d,父进程的id为：%d\n",getpid(),getppid());
	}
	else if(pid > 0)
	{
		printf("这是一个父进程,id:%d,子进程id为：%d\n",getpid(),pid);
	}
	else
	{
		printf("error\n");
	}
	printf("hello \n");
	sleep(10000);
	printf("bye\n");
	return 0;
}
