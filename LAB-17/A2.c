//Demonstrate int, float, double and char pointer.
#include<stdio.h>
void main()
{
	int a,*p;
	printf("Enter the value of a:\n");
	scanf("%d",&a);
	p=&a;
	printf("Aderess=%d\nvalue=%d\n",p,*p);
	float b,*p1;
	printf("Enter the value of b:\n");
	scanf("%f",&b);
	p1=&b;
	printf("Aderess=%d\nvalue=%d\n",p1,*p1);
	char c,*p2;
	printf("Enter the value of c:\n");
	scanf("%c",&c);
	p2=&c;
	printf("Aderess=%d\nvalue=%d\n",p2,*p2);
	double d,*p3;
	printf("Enter the value of d:\n");
	scanf("%lf",&d);
	p3=&d;
	printf("Aderess=%d\nvalue=%d\n",p3,*p3);
}
