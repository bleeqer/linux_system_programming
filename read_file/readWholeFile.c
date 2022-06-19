#include <stdio.h>

int main()
{
	FILE *fp;

	fp = fopen("text.txt", "r");
	
	// moves file pointer to the end of the file
	fseek(fp, 0, SEEK_END);
	
	// get position of the pointer
	int ptrPos = ftell(fp);
	
	// moves the pointer back to start of the file
	fseek(fp, 0, SEEK_SET);

	printf("%d\n", ptrPos);	
	// container for content
	char buf[ptrPos];

	// container, size, nitems, file stream
	fread(buf, ptrPos, 1, fp);		
 	
	printf("%s", buf);

	fclose(fp);


	return 0;
}
