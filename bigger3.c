#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter a,b and c:");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
		printf("a is greatest value.");
	else if(b>a && b>c)
		printf("b is greatest value.");
	else
		printf("c is greatest value.");
	return 0;
}

