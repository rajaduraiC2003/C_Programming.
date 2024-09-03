#include<stdio.h>


int main()
{
        int a[9] = {1,2,3,5,6,8,9};
        int i=0,x,y,j;
        printf("The missing element is:\n");
        x=a[0];
        while(i<8)
        {
                //x=a[0];
                if(a[i]-i != x){
                        printf("%d\n",a[i]-1);
			a[i] = a[i]-1;
                        
                }

                i++;

        }
	i=0;
	while(i<=8)
	{
		printf("%d",a[i]);
		i++;
	}

        return 0;


}
