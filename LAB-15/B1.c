//Delete all duplicate elements from an array.

#include<stdio.h>
void main()
{
	int n,i,j,k;
	printf("Enter the length of array:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		printf("Enter the value:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;k<n-1;k++)
				{
					a[k]=a[k+1];
				}
				k--;
				n--;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("a[%d]=%d",i,a[i]);
	}
}
