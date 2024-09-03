#include <stdio.h>       
int main()    
{             
    int size;
    printf("Enter the length of the array ");
    scanf("%d",&size);    
    int arr[size];
    printf("Enter the array elements ");
    for(int i=0;i<size;i++)  
    scanf("%d",&arr[i]); 
    int n;
    printf("Enter the index of rotation ");
    scanf("%d",&n);         
    printf("Original array: \n");    
    for (int i = 0; i < size; i++) {     
        printf("%d ", arr[i]);     
    }                 
    for(int i = 0; i < n; i++)
   {    
           int j, temp;       
            temp = arr[size-1];            
            for(j = size-1; j > 0; j--)
            {     
                    arr[j] = arr[j-1];    
             }       
            arr[0] = temp;    
    }            
    printf("\n");              
    printf("Array after circular rotation: \n");    
    for(int i = 0; i< size; i++){    
        printf("%d ", arr[i]);    
    }    
    return 0;    
}    
