#include<stdio.h>
void main()
{
	FILE *f;
	f=fopen("myfiles.txt","w");
	if (f==NULL)
	{
		printf("File could not be created:\n");
	}
	fclose(f);
	f=fopen("myfiles.txt","r");
	if (f==NULL)
	{
		printf("could not be open\n");
	}
	fclose(f);
	printf("file closed successfully\n");
	
}
