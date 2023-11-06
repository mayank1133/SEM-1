//Find factorial of a number using function and recursive function.
#include<stdio.h>
void main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	int ans=fac(n);
	printf("factorial=%d",ans);
}
int fac(int n)
{
	if(n==0||n==1)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
}
