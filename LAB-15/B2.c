//Reverse elements of an array without using second array.

#include<stdio.h>
void main()
{
	int n;
	printf("Enter the vallue of ARRAY:");
	scanf("%d",&n);
	int a[n],i,j;
	for(i=0;i<n;i++)
	{
		printf("enter the value:");
		scanf("%d",&a[i]);
	}
	for(j=n-1;j>=0;j--);
	{
		a[j]=a[i];
		
		printf("a[%d]=%d",j+1,a[j]);
	}
}
