#include <unistd.h>
#include <stdio.h>
extern char** environ;
int main(int argc, const char *argv[],char *env[])
{
//	execl("/bin/pwd","pwd",NULL);
	int i = 0;
	while(environ[i])
	{
		puts(environ[i++]);
	}
	return 0;
}
