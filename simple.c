#include<stdio.h>
int main()
{
        int p,n,r,si;
        printf("enter the amount:");
        scanf("%d",&p);
        printf("enter the no of years:");
        scanf("%d",&n);
        printf("enter the rate of interst:");
        scanf("%d",&r);
        si=(p*n*r)/100;
        printf("simple interst:%d",si);
        return 0;
}	
