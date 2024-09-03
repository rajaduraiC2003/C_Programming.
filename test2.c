#include<stdio.h>
void sum();
void main()
{
	printf("sum of two numbers:");
	sum();
}
void sum()
{
	int a,b;
	printf("enter the values to sum:");
	scanf("%d%d",&a,&b);
	printf("the sum of two numbers is:%d",a+b);
}

