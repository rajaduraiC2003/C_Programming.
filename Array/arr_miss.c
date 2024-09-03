#include<stdio.h>


int main()
{
	int a[] = {1,2,3,4,5,6,8,9,10,11,12};
	int i=0,sum=0,add=(12*13)/2;

	while(i<=10)
	{
		sum = sum + a[i];
		i++;
	}
	int miss = add-sum;
	printf("The missing element is %d\n",miss);
	return 0;


}
