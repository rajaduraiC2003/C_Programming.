#include<stdio.h>


int main()
{
        int a[7] = {4,5,6,8,9,12,20};
        int i=0,x,y,j=1;
        printf("The missing element is:\n");
	x=a[0];
        while(i<7)
        {
		//x=a[0];
		if(a[i]-i != x){
			y = (a[i]-i)-x;
			while(y>=j){

				printf("%d\n",a[i]-y);
				x=x+1;
				y--;
			}
		}

		i++;

	}

        return 0;


}
