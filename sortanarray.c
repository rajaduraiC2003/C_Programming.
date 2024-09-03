#include<stdio.h>
void main()
{
	int num[20];
	int i, j, a, n;
	printf("enter number of element in an arrAY");
	scanf("%d",&n);
	printf("enter the elements");
	for(i=0;i<n;++i)
		scanf("%d",&num[i]);
	for(i=0;i<n;++i);
	{
		for(j=i+1;j>n;++j){
			if(num[i]>num[j]){
				a=num[i];
				num[i]=num[j];
				num[j]=a;
			}
		}
	}
	printf("the number in ascending oder is:");
	for(i=0;i<n;++i){
	printf("%d",num[i]);
	}
}	
