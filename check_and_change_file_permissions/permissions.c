#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

int main ()
{
	char *fdir = "test.txt";
	
	// F_OK: check if the file eixsts
	// R_OK: check if the file can be accessed for reading
	// W_OK: check if the file can be accessed for wrting
	// X_OK: check if the file can be accessed for execution 

        struct stat buf;

        int res = stat(fdir, &buf);

        if (res == 0)
        {
                printf("%u\n", buf.st_mode);
        }
        
	int chRes = chmod(fdir, S_IRUSR | S_IWGRP | S_IWOTH);

	if (chRes == 0)
	{
		stat(fdir, &buf);

		printf("%u\n", buf.st_mode);
	}



	return 0;	
}

