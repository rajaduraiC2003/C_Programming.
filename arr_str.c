#include<stdio.h>

int main()
{
	char A[5];
	int i=0,j=0,n=5,a;
	printf("Enter elements:");
	while (i<=4)
	{
		scanf("%c",&A[i]);
		i++;
	}
	while (j<=4)
	{
		printf("%c",A[j]);
		j++;
	}

  	 for (i = 0; i < n; ++i){
     	 for (j = i + 1; j < n; ++j){
        	 if (A[i] > A[j]){
           		 a = A[i];
           		 A[i] = A[j];
            		 A[j] = a;
        		 }
     		 }
  	 }
   printf("\nThe numbers in ascending order is:");
   for (i = 0; i < n; ++i){
      printf("%c", A[i]);
   }
   printf("\n");
	return 0;
}
