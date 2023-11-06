//Count number of elements divisible by 3 in array.

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
		if(a[i]%3==0)
		{
			count++;
		}
	}
	printf("number of elements divisible by 3 in array are:%d",count);
}
