//Find maximum and minimum between two numbers using function.

#include<stdio.h>
int max(int a,int b);
int min(int a,int b);
void main()
{
	int a,b,c,d;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	c=max(a,b);
	d=min(a,b);
	printf("%d is maximum\n",c);
	printf("%d is minimum",d);
}
int max(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
	return b;	
	}
}

int min(int a,int b)
{
	if(a<b)
	{
		return a;
	}
	else
	{
	return b;	
	}
}


