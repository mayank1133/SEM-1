//Add two numbers using function.
#include<stdio.h>
int add(int a,int b);
void main()
{
	int a,b;
	printf("Enter the value of 'a':");
	scanf("%d",&a);
	printf("Enter the value of 'b':");
	scanf("%d",&b);
	int c=add(a,b);
	printf("%d",c);
}
int add(int a,int b)
{
	int c=a+b;
	return c;
}
