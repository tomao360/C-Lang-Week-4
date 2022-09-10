#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#pragma warning(disable : 4996)

void testCopy(char* fileSrc, char* fileDest)
{
	FILE* fsrc;
	FILE* fdest;
	int count = 0;
		

	//Find out the file size
	fsrc = fopen(fileSrc, "r");
	if (fsrc != NULL)
	{
		char ch = fgetc(fsrc);
		while (ch != EOF)
		{
			ch = fgetc(fsrc);
			count++;
		}

		fclose(fsrc);
	}
	else
	{
		printf("ERROR");
		return;
	}

	//Read all file into memory
	char* memory = (char*)malloc(count);
	char* startMemory = memory;

	fsrc = fopen(fileSrc, "r");
	if (fsrc != NULL)
	{
		fread(memory, sizeof(char), count, fsrc);
		fclose(fsrc);
	}
	else
	{
		printf("ERROR");
		return;
	}

	//Write all memory into file
	fdest = fopen(fileDest, "w");
	if (fdest != NULL)
	{
		fwrite(memory, sizeof(char), count, fdest);
		fclose(fdest);
	}
	else
	{
		printf("ERROR");
		return;
	}

	free(startMemory);
}

int main_1_0_1(int argc, char* argv[])
{
	testCopy(argv[1], argv[2]); 

	return 0;
}