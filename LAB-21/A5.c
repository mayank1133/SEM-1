#include<stdio.h>
void main()
{
	FILE *f,*f1;
	f=fopen("text.txt","r");
	f1=fopen("doc.txt","w");
	char ch=getc(f);
	while(ch!=EOF)
	{
		putc(ch,f);
		ch=getc(f);
	}
	fclose(f);
	fclose(f1);
	printf("FILE COPIED SUCCESSFULLY");
}
