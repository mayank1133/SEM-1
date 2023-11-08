//Find a character from given string.

#include<stdio.h>
#include<string.h>
int find(char *str,char ch)
{
	int i,index=-1;
	while(str[i]!='\0')
	{
		if(str[i]==ch)
		{
			
			return i;
		}
		i++;
	}
	/*for( i=0;i<strlen(str);i++)
	{
		index=i;
		break;
	}*/
	return index;
}
int main()
{
char str[100];
char ch;
printf("Enter the string:");
gets(str);
//scanf("%s",&str);
printf("Enter character to find:");
scanf("%c",&ch);

int index=find(str,ch);
{
	if(index!=-1)
{
	printf("Character %c found at index %d.\n",ch,index);
}
else
{
	printf("character %c is not found in string.\n");
}
return 0;
}
}
