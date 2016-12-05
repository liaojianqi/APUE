#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>

#define MAX 1024
char cmd[MAX];
int n;

int main(int argc, char const *argv[])
{
	printf("\n%% ");
	while(fgets(cmd,MAX,stdin) != NULL)
	{
		if(cmd[strlen(cmd)-1] == '\n')
			cmd[strlen(cmd)-1] = 0;
		int pid = fork();
		if(pid < 0)
		{
			printf("fork error!\n");
			exit(0);
		}else if(pid == 0)
		{
			execlp(cmd,cmd,(char*)0);
			exit(127);
		}
		int status;
		if(waitpid(pid,&status,0) < 0){
			printf("waitpid error!\n");
		}
		printf("\n%% ");
	}
	return 0;
}