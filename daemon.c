#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <time.h>

int main(int argc, const char *argv[])
{
	int fd;
	time_t timer;
	struct tm *t;
	char *str;
	timer = time(NULL);
	if(daemon(0,0) == -1)
	{
		printf("deamon error\n");
		exit(-1);
	}
	while(1)
	{
		timer = time(0);
		t = localtime(&timer);
		str = asctime(t);
		printf("time is:%s\n",str);
	}
	printf("Now time is:%s\n",asctime(localtime(&timer)));
	return 0;
}






