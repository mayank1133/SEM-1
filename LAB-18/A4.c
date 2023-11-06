//Return the maximum of three floating-point numbers

#include<stdio.h>
float max(float a,float b,float c);
void main()
{
	float a,b,c,d;
	printf("Enter thr value with point:");
	scanf("%f",&a);
	printf("Enter thr value with point:");
	scanf("%f",&b);
	printf("Enter thr value with point:");
	scanf("%f",&c);
	d=max(a,b,c);
	printf("%f",d);
}
float max(float a,float b,float c)
{ 
    float d;
    if (a>b)
    {
    	if(b>c)
    	{
            return a;
		}
	}
	else if(a<b)
	{
		if (b>c)
		{
            return b;
		}
		else
	{
		return c;
	}
	}
	
}
