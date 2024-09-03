#include<stdio.h>

int main()
{
	int a=8;
	int *pa = &a;
	printf("%d\n",a);
	printf("%p\n",pa);
	printf("%d\n",*pa);
	printf("%p\n",&a);
	printf("%p\n",&pa);

	return 0;
}
