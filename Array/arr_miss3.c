#include<stdio.h>


int main()
{
        int a[7] = {4,5,6,8,9,11,13};
        int i=0,x,y,j=1;
        printf("The missing element is:\n");
	x=a[0];
        while(i<7)
        {
		//x=a[0];
		if(a[i]-i != x){
			printf("%d\n",a[i]-1);
			x=x+1;
		}

		i++;

	}

        return 0;


}

