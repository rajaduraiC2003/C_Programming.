#include<stdio.h>

int main()
{
	int a[5]={6,2,4,6,5};
	int *pa=NULL;
	int *pa2=NULL;
	pa=a;
	printf("The duplicate elements are:\n");
	while(pa<&a[4])
	{
		pa2=pa+1;
		while(pa2<=&a[4]){
			if(*pa==*pa2){
				printf("%d\n",*pa2);
			}
			pa2++;
		}
		pa++;

	}

	return 0;
}
