#include <stdio.h>
#include <stdlib.h>

int main () 
{
	int num;
	FILE *fptr;

	fptr = fopen("text.txt", "w");

	if (fptr == NULL)
	{
		printf("Error!");

		exit(1); // terminates the process
	}

	printf("Enter num: ");
	scanf("%d", &num);

	// fprintf sends formatted output to a stream
	// param: 
	// stream - pointer to a FILE object
	// format - string that contains text to be written to the stream
	fprintf(fptr, "%d", num);

	fclose(fptr);

	return 0;
}
