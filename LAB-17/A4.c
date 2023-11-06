//Swap value of two numbers using pointer.

#include<stdio.h>
void main()
{
    int a,*p1,b,*p2,c;
    printf("Enter the value of a:");
	scanf("%d",&a);
	p1=&a;
	printf("Enter the value of b:");
	scanf("%d",&b);
	p2=&b;
	c=*p1;
	a=*p2;
	b=*p1;
	printf("a=%d\nb=%d\n",a,b);
}
