//Find Sum, Avg. of given numbers from an array

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,sum=0;
	float avg,number;
	printf("enter the length of array:");
	scanf("%d",&n);
	number=n;
	int arr[n],i;
	for(i=0;i<n;i++)
	{
		printf("enter number:");
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	avg=sum/number;
	printf("sum=%d\navg=%d",sum,avg);

}
	
