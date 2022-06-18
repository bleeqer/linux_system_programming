#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

const char *name = "Arbitrary Directory";

int main()
{
	mkdir(name, S_IRWXU);

	exit(EXIT_SUCCESS);
}
