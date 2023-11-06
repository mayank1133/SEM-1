//Pass an array in function to print array elements.

#include<stdio.h>
void arr(int a[10]);
void main()
{
	int i,a[10];
	arr(a);
	for( i=0;i<10;i++)
	{
		printf("%d",a[i]);
	}
}
void arr(int a[10])
{
	int i;
	for(i=0
	;i<10;i++)
	{
		printf("enter the element:");
		scanf("%d",&a[i]);
	}
}

