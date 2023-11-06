//Swap two numbers using call by value and call by reference.

#include<stdio.h>
void swap(int a,int b);
void main()
{
	int a,b,c;
	printf("Enter the value of 'a':");
	scanf("%d",&a);
	printf("Enter the value of 'b':");
	scanf("%d",&b);

	swap(a,b);	
}
void swap(int a,int b)
{
	int d;
	d=a;
	a=b;
	b=d;
	printf("a=%d b=%d",a,b);
	
}

	
