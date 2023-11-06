//Read values in two-dimensional array and print them in matrix form
#include<stdio.h>
void main()
{
	int m,n,i,j;
//	m=column amd n=row
    printf("Enter the row:");
    scanf("%d",&n);
    printf("Enter the column:");
    scanf("%d",&m);
	int a[n][m];
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			printf("Enter the value of a[%d][%d] element of matrix:",i,j);
			scanf("%d",&a[i][j]);
		}

	}
	for (i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
			printf("%d ",a[i][j]);
		}
			printf("\n");

	}
}
