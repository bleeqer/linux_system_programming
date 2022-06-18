#include <stdio.h>
#include <sys/types.h>
#include <dirent.h>

#define _XOPEN_SOURCE 700

int main()
{
	DIR *dp;

	struct dirent *ep;

	dp = opendir("./"); // open a directory
 
	if (dp != NULL)
	{
		while ((ep = readdir(dp)) != NULL) // readdir returns a pointer to a dirent structure
						   // representing the next directory entry
			puts (ep -> d_name); // puts writes a string to stdout not including null

		(void) closedir(dp); // close directory
	
		return 0;
	} else
	{
		perror("Couldn't open the directory"); // writes error message through stderr
		return -1;
	}
}

