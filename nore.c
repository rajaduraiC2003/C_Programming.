#include<stdio.h>
void sum();
	void main()
{
	printf("sum of two numbers");
	sum();
}
void sum()
{
	int a,b;
	printf("\n enter the values of a,b");
		scanf("%d%d",&a,&b);
		printf("sum is is %d",a+b);
}

