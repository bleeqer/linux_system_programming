#include <sys/stat.h>
#include <stdio.h>

int main () 
{
	char *fdir = "text.txt";
	
	struct stat buf;

	int res = stat(fdir, &buf);
	
	if (res == 0) 
	{
		printf("succeeded\n");
		printf("the file owner: %d\n", buf.st_uid);
		printf("the file owner group: %d\n", buf.st_gid);
	}
	int uid = buf.st_uid;

	return 0;

}
