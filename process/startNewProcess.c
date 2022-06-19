#include <unistd.h>
#include <stdio.h>
#include <signal.h>


int main()
{
	printf("hi 2 u\n");

	int createdPID = fork();

	if (createdPID == 0)
	{
		printf("child!\n");
		printf("%d\n", getpid());
		printf("%d\n", createdPID);
		int res = kill(getpid(), SIGKILL);
		printf("%d\n", res);	
	}
	else
	{
		printf("parent!\n");
		printf("%d\n", getpid());
		printf("%d\n", createdPID);
	}

	return 0;
}
