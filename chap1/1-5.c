#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#define BUFFSIZE 1000

int main()
{
	int n;
	char c;
	while((c = getc(stdin)) != EOF)
	{
		if(putc(c,stdout) < 0)
			printf("write error!\n");
	}
	// if(ferror(stdin))
		
	return 0;
}
