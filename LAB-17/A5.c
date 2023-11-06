//Store n elements in an array and print the elements using pointer.
#include<stdio.h>
void main()
{
	int m,i;
	printf("Enter the length of array:");
    scanf("%d",&m);
    int a[m],*p;
    for(i=0;i<m;i++)
    {
    	printf("Enter the value of a:");
    	scanf("%d",&a[i]);
    	p=a[i];
	}
	for(i=0;i<m;i++)
	{
		printf("%d",*(a+i));
	}
}
	
