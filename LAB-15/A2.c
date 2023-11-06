//Count total number of negative elements in array.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the length of ARRAY:");
	scanf("%d",&n);
	int a[n],i,count=0;
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			count++;
		}
	}
	printf("number of negative elements in array are:%d",count);
}
