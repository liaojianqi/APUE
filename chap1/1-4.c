#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1000

int main()
{
	int n;
	char buff[BUFFSIZE];
	while( (n = read(STDIN_FILENO,buff,BUFFSIZE)) > 0 )
	{
		// printf("n=%d,buff=%s\n",n,buff);
		if( write(STDOUT_FILENO,buff,n) != n )
		{
			printf("write error!\n");
			exit(0);
		}
	}
	if(n<0)
	{
		printf("read error!\n");
		exit(0);
	}
	return 0;
}
