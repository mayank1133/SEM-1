//Read five person height and weight and count the number of person having height greater than 170 and
//weight less than 50

#include<stdio.h>
void main()
{
	int h,w,arr[4],i,count=0;
	for(i=0;i<=4;i++)
	{
		printf("enter weight: ");
		scanf("%d",&w);
		printf("enter height: ");
		scanf("%d",&h);
	}

	for(i=0;i<=4;i++)
	{
		if(h>170&&w>50)
		{
			count++;
		}
	}
	printf("person having height greater than 170 and");
    printf("weight less than 50 are:%d",count);
}
