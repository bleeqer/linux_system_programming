#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char *line = NULL;
	size_t len = 0;
	ssize_t read;

	fp = fopen("text.txt", "r");
	
	if (fp == NULL)
	{
		exit(EXIT_FAILURE);
	}

	while ((read = getline(&line, &len, fp)) != -1)
	{	
		// getLine returns the number of characters read
		printf("retrieved line of length: %zu:\n", read);
		
		printf("line: %s", line);
		printf("input buffer size: %zu\n", len); 

	}

	fclose(fp);

	exit(EXIT_SUCCESS);
}
