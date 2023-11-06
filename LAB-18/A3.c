//Count simple interest using function.

#include<stdio.h>
int SI(int p,int r,int n);

void main()
{
	int p,r,n,c,d;
	printf("Enter the amount:");
	scanf("%d",&p);
	printf("Enter the Rate of interest:");
	scanf("%d",&r);
	printf("Enter the time period of loan:");
	scanf("%d",&n);
	c=SI(p,r,n);
	d=SI(p,r,n);
	printf("simple interest is %d",c);
}
int SI(int p,int r,int n)
{
	int c=(p*r*n)/100;
	return c;
	
}
