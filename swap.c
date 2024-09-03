#include<stdio.h>

int swap(int *n1, int *n2);

int main()
{
	int a=4,b=5;
	printf("a=%d,b=%d\n",a,b);
	swap(&a,&b);

	printf("a=%d,b=%d\n",a,b);
	return 0;
}

int swap(int*n1,int*n2)
{
	int var;
	var=*n1;
	*n1=*n2;
	*n2=var;
}
