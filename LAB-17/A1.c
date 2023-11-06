//Print value and address of a variable.

#include<stdio.h>
void main()
{
	int a,*p;
	printf("Enter the value of a:");
	scanf("%d",&a);
	p=&a;
	printf("Aderess=%d\nvalue=%d",p,*p);
}
