#include <unistd.h>
#include <stdio.h>

int main() {

	char *path1 = "file1.txt";
	char *path2 = "link.txt";

	
	int status;

	status = link(path1, path2);
	
	if (status == 0)
	{
		printf("Hard link has been created");
	}

	return 0;
}
