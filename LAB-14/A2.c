//Count number of positive or negative number from an array of n numbers.

#include<stdio.h>
void main()
{
	int n,pos=0,neg=0;
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
    	if(arr[i]>0)
    	{
    		pos++;
		}
		else
		{
			neg++;
		}
	}
	printf("pos=%d\nneg=%d",pos,neg);
}
	
