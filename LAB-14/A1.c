//1. Read n numbers from user and print in normal and reverse order

#include<stdio.h>
void main()
{
	int n;
	printf("enter the length of array:");
	scanf("%d",&n);
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
		
	}
	printf("\n");
	for(i=n-1;i>=0;i--)
	{
		printf("arr[%d]:%d\n",i,arr[i]);
		
	}
	
}
