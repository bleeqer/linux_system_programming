#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

int main ()
{	
	int fd; // file descriptor 
	char buf[10];

	fd = open("text.txt", O_RDONLY);

	read(fd, buf, sizeof(buf));

	printf("%s\n", buf);

	return 0;
}
