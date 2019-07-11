#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int main(int argc, const char *argv[])
{
	pid_t pid;
	int num =0;
	pid = fork();//创建进程后，对父子进程各返回一次，对子进程返回0,对父进程返回父进程的id
	if(pid==0)//说明当前是子进程，getppid（）获得父进程的id
	{
		printf("Here is child,id is %d,parent id is %d\n",getpid(),getppid());
		num++;
	}
	else if(pid > 0)//说明对父进程返回子进程的id。此时进程是父进程，pid是子进程
	{
		printf("here is parent,mr pid is %d,chile id is%d\n",getpid(),pid);
		num++;
	}
	else printf("fork error!\n");
	printf("num %d",num);
//	exit(0);
//	return 0;
}
