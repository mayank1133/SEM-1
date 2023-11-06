//Use string handling functions strlen(), strcmp(), strcpy(), strcat(), strrev(), strlwr() and strupr()
#include<stdio.h>
#include<string.h>
void main()
{
	char s1[10],s2[10];
	printf("enter string 1:");
	gets(s1);
	printf("enter string 2:");
	gets(s2);
    printf("lengtf of s1=%d\nlength of s2=%d",strlen(s1),strlen(s2));
    if (strcmp(s1,s2)==0)
    {
    	printf("same\n");
	}
	else
	{
		printf("different\n");
	}
	
	
	strcat(s1,s2);
	printf("%s\n",s1);
	strrev(s1);
	printf("%s\n",s1);
	printf("%s\n",strlwr(s1));
	printf("%s\n",strupr(s1));
	strcpy(s1,s2);
	printf("%s\n",s1);
	
	
	
}
