#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n=5,i=0;
/*	printf("enter the lenth of an array:");
	scanf("%d",&n);*/
	int A[n]={0};
	printf("Enter the elements:");
        while (n>0)
        {
		n--;
                scanf("%d",&A[n]);
        }
	 while (i<n)
        {
                printf("%d\n",A[i]);
                i++;
        }

        return 0;
}

