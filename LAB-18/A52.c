#include<stdio.h>
void swap(int *a,int *b)
{

    int c=*a;
    *a=*b;
    *b=c;
}
int main()
{
	int x,y;
	printf("Enter the value of x:");
	scanf("%d",&x);
	printf("Enter the value of y:");
	scanf("%d",&y);
	swap(&x,&y);
	printf("%d %d",x,y);
	return 0;
	
}

