//Count number of positive, negative and zero elements from 3 X 3 matrix.
#include<stdio.h>
void main()
{

int m,n,i,j;
//	m=column amd n=row
    printf("Enter the row:");
    scanf("%d",&n);
    printf("Enter the column:");
    scanf("%d",&m);
	int a[n][m],pos=0,neg=0;
	for( i=0;i<n;i++)
	{
		for( j=0;j<m;j++)
		{
			printf("Enter the value of a[%d][%d] element of matrix:",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0)
			{
				pos++;
			}
			else
			{
				neg++;
			}
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
	printf("positive count=%d\n",pos);
	printf("negative count=%d",neg);
}
