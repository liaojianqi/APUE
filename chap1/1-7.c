#include <unistd.h>
#include <errno.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	errno = EACCES;	//permission denied
	fprintf(stderr,"%s\n",strerror(errno));
	errno = ENOENT; //no such file or directory
	perror(argv[0]);
	return 0;
}