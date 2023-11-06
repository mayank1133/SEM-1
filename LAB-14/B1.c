//Count numbers higher than the average of an array.

#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,sum=0,count=0;
	float avg=1,number;
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
	printf("avg=%f\n",avg);
	for(i=0;i<n;i++)
	{
		if(arr[i]>avg)
		{
			count++;
		}
	}
	printf("numbers higher than the average of an array are:%d",count);
}
