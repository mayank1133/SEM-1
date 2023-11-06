#include<stdio.h>
void main()
{
    int i,j,x=5,n;
    char a='A';
    
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=x-i;j++)
        {
            printf(" ");
        }
        for(j=1;j<=i;j++)
        {
        	if(i%2==0){
			
	
			printf("%c ",a);
			a++;}
			else
			{
				printf("%d ",j);
			}
	    }
	    printf("\n");
        }
        
    }
