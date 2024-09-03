#include<stdio.h>

void main()
{
	int a[5] = {5,10,15,20,25};
	int i,j,m;

	i = ++a[1];
	printf("%d\n",i);

	j = a[1]++;
       	printf("%d\n",j);
/*	m = ++a[1];
	printf("%d",m);*/
	printf("%d\n",a[1]);
/*	m = a[i++];
	printf("%d,%d,%d",i,j,m);*/
//	return 0;
}
