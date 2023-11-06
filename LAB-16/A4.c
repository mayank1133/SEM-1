//Perform Addition of two matrices.
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
	int b[n][m];
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			printf("Enter the value of a[%d][%d] element of matrix:",i,j);
			scanf("%d",&b[i][j]);
		}

	}
	for (i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
			printf("%d ",b[i][j]);
		}
			printf("\n");

	}
	int sum[i][j];
	for (i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
			
				sum[i][j]=a[i][j]+b[i][j];
			
		}
			printf("\n");

	}
	printf("sumof two matrix is as follow\n");
	for (i=0;i<n;i++)
	{
        for(j=0;j<m;j++)
        {
			printf("%d ",sum[i][j]);
		}
			printf("\n");

	}
}


