#include<stdio.h>
int main()
{
	int a,p,r,t;
	printf("Enter the principal amount:");
	scanf("%d",&p);
	printf("Enter the rate of intrest:");
	scanf("%d",&r);
	printf("number of time periods elapsed:");
	scanf("%d",&t);
	a=p*(1+r/100)^t;
	printf("The compount intrest is %d\n",a);
	return 0;
}

