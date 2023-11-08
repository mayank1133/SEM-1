#include<stdio.h>
void main()
{
	FILE *a;
	char ch;
	int LN,t,w,c;
	a=fopen("text.txt","w");
	if (a==NULL)
	{
		printf("File could not be created:\n");
	}
	fclose(a);
	a=fopen("text.txt","r");
	ch=getc(a);
	while(ch!=EOF)
	{
		if(ch=='\n')
		{
			LN++;
		}
	
	else if(ch==' ')
	{
		w++;
	}
	else if(ch!='\n'&&ch==' ')
	{
		t++;
		ch=getc(a);
	}
}
	printf("\nline=%d",LN);
	printf("\nword=%d",w);
	printf("\nTabs=%d",t);
}
