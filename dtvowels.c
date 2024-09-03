#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c[20];
	int i,j,l=0;
	printf("Enetr a string:");
	scanf("%s",c);
	l=strlen(c);
	for(i=0;i<l;i++)
	{
		if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'||c[i] == 'A' || c[i] == 'E' || c[i] == 'I' || c[i] == 'O'){
		for (j = i; j < l; j++)
		{
            		c[j] = c[j + 1];
		 }
     //       i--;
       //     l--;
       	 }
    //    c[l + 1] = '\0';
    }
   printf("After deleting the vowels, the string will be : %s\n", c);
   return 0;

   }
