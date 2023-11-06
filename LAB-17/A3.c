//Calculate sum of two numbers using pointer.

#include<stdio.h>
void main()
{
	int a,*p1,b,*p2,sum;
	printf("Enter the value of a:");
	scanf("%d",&a);
	p1=&a;
	printf("Enter the value of b:");
	scanf("%d",&b);
	p2=&b;
	sum=*p1+*p2;
	printf("sum of TWO VALUE is:%d",sum);
}
	
