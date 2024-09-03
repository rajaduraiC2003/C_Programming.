#include<stdio.h>

int main()
{
	int a[10] = {3,7,4,9,12,6,1,11,2,10};
	int i=0,j,t,x,y;

	while(i<10){
		j=i+1;

		while(j<10){

			if(a[i] > a[j]){
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
			j++;
		}

		i++;
	}
	x=a[0];
	i=0;
	j=1;
	printf("The missing numbers are:\n");
        while(i<10)
        {
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
