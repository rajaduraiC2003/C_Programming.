#include<stdio.h>
int main()
{
char upr,lwr;
int asci;
	printf("enter the letter:");
	scanf("%c",&upr);
	asci=upr+32;
	printf("the give letter is:%c",upr);
        asci=lwr-32;
	scanf("%c",&lwr);
	printf("\n enter the letter:%c",lwr);
	return 0;
}
