#include <stdio.h>
#include <unistd.h>

int main()
{
	printf("userID = %d, groupId = %d",getuid(),getgid());
	return 0;
}
