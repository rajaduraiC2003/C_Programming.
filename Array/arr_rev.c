#include<stdio.h>

int main()
{
	int A[4]={1,2,3,4},i=0,j=3,temp,c=0;

	while (i<=j)
	{
		temp=A[i];
		A[i]=A[j];
		A[j]=temp;
		i++;
		j--;
	}
	while (c<=3)
        {
                printf("%d\n",A[c]);
                c++;
        }
        return 0;
}

