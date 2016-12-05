/* 信号量 */
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <signal.h>

static void sig_int();

int main(int argc, char const *argv[])
{
	if(signal(SIGINT,sig_int) == SIG_ERR)
		printf("signal error\n");
	while(1){

	}
	return 0;
}

void sig_int(){
	printf("occur a interrupt\n");
}
