//Count number of even or odd number from an array of n numbers.

#include<stdio.h>
void main()
{
	int n,even=0,odd=0;
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
    	if(arr[i]%2==0)
    	{
    		even++;
		}
		else
		{
			odd++;
		}
	}
	printf("even=%d\nodd=%d",even,odd);
}
	
